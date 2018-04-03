             break;
         }
     }
-
-    checkpoint();
 }
 
 void
-Rock::Rebuild::doOneEntry()
+Rock::Rebuild::loadOneSlot()
 {
-    debugs(47,5, HERE << sd->index << " filen " << filen << " at " <<
+    debugs(47,5, sd->index << " slot " << loadingPos << " at " <<
            dbOffset << " <= " << dbSize);
 
     ++counts.scancount;
 
     if (lseek(fd, dbOffset, SEEK_SET) < 0)
         failure("cannot seek to db entry", errno);
 
-    MemBuf buf;
-    buf.init(SM_PAGE_SIZE, SM_PAGE_SIZE);
+    buf.reset();
 
     if (!storeRebuildLoadEntry(fd, sd->index, buf, counts))
         return;
 
+    const SlotId slotId = loadingPos;
+
     // get our header
     DbCellHeader header;
     if (buf.contentSize() < static_cast<mb_size_t>(sizeof(header))) {
         debugs(47, DBG_IMPORTANT, "WARNING: cache_dir[" << sd->index << "]: " <<
-               "Ignoring truncated cache entry meta data at " << dbOffset);
-        ++counts.invalid;
+               "Ignoring truncated " << buf.contentSize() << "-byte " <<
+               "cache entry meta data at " << dbOffset);
+        freeSlotIfIdle(slotId, true);
         return;
     }
     memcpy(&header, buf.content(), sizeof(header));
-
-    if (!header.sane()) {
+    if (header.empty()) {
+        freeSlotIfIdle(slotId, false);
+        return;
+    }
+    if (!header.sane(dbEntrySize, dbEntryLimit)) {
         debugs(47, DBG_IMPORTANT, "WARNING: cache_dir[" << sd->index << "]: " <<
                "Ignoring malformed cache entry meta data at " << dbOffset);
-        ++counts.invalid;
+        freeSlotIfIdle(slotId, true);
         return;
     }
     buf.consume(sizeof(header)); // optimize to avoid memmove()
 
+    useNewSlot(slotId, header);
+}
+
+/// parse StoreEntry basics and add them to the map, returning true on success
+bool
+Rock::Rebuild::importEntry(Ipc::StoreMapAnchor &anchor, const sfileno fileno, const DbCellHeader &header)
+{
     cache_key key[SQUID_MD5_DIGEST_LENGTH];
     StoreEntry loadedE;
-    if (!storeRebuildParseEntry(buf, loadedE, key, counts, header.payloadSize)) {
-        // skip empty slots
-        if (loadedE.swap_filen > 0 || loadedE.swap_file_sz > 0) {
-            ++counts.invalid;
-            //sd->unlink(filen); leave garbage on disk, it should not hurt
+    const uint64_t knownSize = header.entrySize > 0 ?
+                               header.entrySize : anchor.basics.swap_file_sz.get();
+    if (!storeRebuildParseEntry(buf, loadedE, key, counts, knownSize))
+        return false;
+
+    // the entry size may still be unknown at this time
+
+    debugs(47, 8, "importing basics for entry " << fileno <<
+           " swap_file_sz: " << loadedE.swap_file_sz);
+    anchor.set(loadedE);
+
+    // we have not validated whether all db cells for this entry were loaded
+    EBIT_CLR(anchor.basics.flags, ENTRY_VALIDATED);
+
+    // loadedE->dump(5);
+
+    return true;
+}
+
+void
+Rock::Rebuild::validationSteps()
+{
+    debugs(47, 5, sd->index << " validating from " << validationPos);
+
+    // see loadingSteps() for the rationale; TODO: avoid duplication
+    const int maxSpentMsec = 50; // keep small: validation does not do I/O
+    const timeval loopStart = current_time;
+
+    int validated = 0;
+    while (validationPos < dbEntryLimit) {
+        validateOneEntry();
+        ++validationPos;
+        ++validated;
+
+        if (validationPos % 1000 == 0)
+            debugs(20, 2, "validated: " << validationPos);
+
+        if (opt_foreground_rebuild)
+            continue; // skip "few entries at a time" check below
+
+        getCurrentTime();
+        const double elapsedMsec = tvSubMsec(loopStart, current_time);
+        if (elapsedMsec > maxSpentMsec || elapsedMsec < 0) {
+            debugs(47, 5, "pausing after " << validated << " entries in " <<
+                   elapsedMsec << "ms; " << (elapsedMsec/validated) << "ms per entry");
+            break;
         }
-        return;
     }
+}
 
-    assert(loadedE.swap_filen < dbEntryLimit);
-    if (!storeRebuildKeepEntry(loadedE, key, counts))
-        return;
+void
+Rock::Rebuild::validateOneEntry()
+{
+    LoadingEntry &e = entries[validationPos];
+    switch (e.state) {
 
-    ++counts.objcount;
-    // loadedE->dump(5);
+    case LoadingEntry::leEmpty:
+        break; // no entry hashed to this position
 
-    sd->addEntry(filen, header, loadedE);
+    case LoadingEntry::leLoading:
+        freeBadEntry(validationPos, "partially stored");
+        break;
+
+    case LoadingEntry::leLoaded:
+        break; // we have already unlocked this entry
+
+    case LoadingEntry::leCorrupted:
+        break; // we have already removed this entry
+    }
+}
+
+/// Marks remaining bad entry slots as free and unlocks the entry. The map
+/// cannot do this because Loading entries may have holes in the slots chain.
+void
+Rock::Rebuild::freeBadEntry(const sfileno fileno, const char *eDescription)
+{
+    debugs(47, 2, "cache_dir #" << sd->index << ' ' << eDescription <<
+           " entry " << fileno << " is ignored during rebuild");
+
+    Ipc::StoreMapAnchor &anchor = sd->map->writeableEntry(fileno);
+
+    bool freedSome = false;
+    // free all loaded non-anchor slots
+    SlotId slotId = entries[anchor.start].more;
+    while (slotId >= 0) {
+        const SlotId next = entries[slotId].more;
+        freeSlot(slotId, false);
+        slotId = next;
+        freedSome = true;
+    }
+    // free anchor slot if it was loaded
+    if (entries[fileno].anchored) {
+        freeSlot(anchor.start, false);
+        freedSome = true;
+    }
+    assert(freedSome);
+
+    sd->map->forgetWritingEntry(fileno);
+    ++counts.invalid;
 }
 
 void