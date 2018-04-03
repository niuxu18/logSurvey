
/// parse maximum db disk size
void
Rock::SwapDir::parseSize(const bool reconfiguring)
{
    const int i = GetInteger();
    if (i < 0)
        fatal("negative Rock cache_dir size value");
    const uint64_t new_max_size =
        static_cast<uint64_t>(i) << 20; // MBytes to Bytes
    if (!reconfiguring)
        max_size = new_max_size;
    else if (new_max_size != max_size) {
        debugs(3, DBG_IMPORTANT, "WARNING: cache_dir '" << path << "' size "
