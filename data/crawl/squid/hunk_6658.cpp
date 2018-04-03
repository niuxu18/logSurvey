 
 #include "squid.h"
 
-#define stackSize(S) ((S)->top - (S)->base)
+/* module globals */
 
-typedef struct {
-    void **base;
-    void **top;
-    int max_size;
-} Stack;
-
-typedef struct {
-    char *name;
-    int n_allocated;
-    size_t size;
-    int n_used;
-    Stack Stack;
-} memData;
-
-static memData MemData[MEM_MAX];
-
-static void *stackPop(Stack * s);
-static int stackFull(Stack * s);
-static int stackEmpty(Stack * s);
-static void stackPush(Stack * s, void *p);
-static void memDataInit(mem_type, const char *, size_t, int);
-static OBJH memStats;
-
-static int
-stackEmpty(Stack * s)
-{
-    return s->top == s->base;
-}
-
-static int
-stackFull(Stack * s)
-{
-    return (stackSize(s) == s->max_size);
-}
-
-static void *
-stackPop(Stack * s)
-{
-    void *p;
-    assert(s->top != s->base);
-    s->top--;
-    p = *s->top;
-    *s->top = NULL;
-    return p;
-}
+static MemPool *MemPools[MEM_MAX];
 
+/* all pools share common memory chunks so it is probably better to ignore max_pages */
 static void
-stackPush(Stack * s, void *p)
+memDataInit(mem_type type, const char *name, size_t size, int max_pages_notused)
 {
-    if (stackSize(s) == s->max_size) {
-	xfree(p);
-    } else {
-	*s->top = p;
-	s->top++;
-    }
+    assert(name && size);
+    MemPools[type] = memPoolCreate(name, size);
 }
 
 static void
-memDataInit(mem_type type, const char *name, size_t size, int max_pages)
+memStats(StoreEntry * sentry)
 {
-    memData *m = &MemData[type];
-    m->size = size;
-    m->name = xstrdup(name);
-#if !PURIFY
-    if (Config.onoff.mem_pools) {
-	m->Stack.max_size = max_pages;
-	m->Stack.base = xcalloc(max_pages, sizeof(void **));
-	m->Stack.top = m->Stack.base;
+    mem_type t;
+    storeBuffer(sentry);
+    storeAppendPrintf(sentry, "%-20s\t %s\t %s\t %s\t %s\t %s\t %s\t %s\t %s\t %s\t %s\n",
+	"Pool",	"Obj Size",
+	"Capacity (#)", "Capacity (KB)", "Used (KB)", "HWater (KB)", 
+	"Util (%)", "Grow Count",
+	"Malloc (#)", "Malloc (KB)", "MHWater (KB)");
+    for (t = MEM_NONE + 1; t < MEM_MAX; t++) {
+	const MemPool *pool = MemPools[t];
+	if (!memPoolWasNeverUsed(pool))
+	    memPoolReport(pool, sentry);
     }
-#endif
+    storeAppendPrintf(sentry, "\n");
+    /* memStringStats(sentry); */
+    memReportTotals(sentry);
+    storeBufferFlush(sentry);
 }
 
+
+
 /*
  * PUBLIC ROUTINES
  */
 
+/* find appropriate pool and use it (pools always init buffer with 0s) */
 void *
-memAllocate(mem_type type, int clear)
+memAllocate(mem_type type)
 {
-    void *p = NULL;
-    memData *m = &MemData[type];
-    if (!stackEmpty(&m->Stack)) {
-	p = stackPop(&m->Stack);
-	assert(p != NULL);
-    } else {
-	p = xmalloc(m->size);
-	m->n_allocated++;
-    }
-    m->n_used++;
-    if (clear)
-	memset(p, '\0', m->size);
-    return p;
+    return memPoolAlloc(MemPools[type]);
 }
 
+/* find appropriate pool and use it */
 void
 memFree(mem_type type, void *p)
 {
-    memData *m = &MemData[type];
-    assert(p != NULL);
-    m->n_used--;
-    if (stackFull(&m->Stack)) {
-	xfree(p);
-	m->n_allocated--;
-    } else {
-	stackPush(&m->Stack, p);
-    }
+    memPoolFree(MemPools[type], p);
 }
 
 void
 memInit(void)
 {
     mem_type t;
-    memData *m;
-    memset(MemData, '\0', MEM_MAX * sizeof(memData));
+    memInitModule();
+    /* set all pointers to null */
+    memset(MemPools, '\0', sizeof(MemPools));
+    /*
+     * it does not hurt much to have a lot of pools since sizeof(MemPool) is
+     * small; someday we will figure out what to do with all the entries here
+     * that are never used or used only once; perhaps we should simply use
+     * malloc() for those? @?@
+     */
     memDataInit(MEM_4K_BUF, "4K Buffer", 4096, 10);
     memDataInit(MEM_8K_BUF, "8K Buffer", 8192, 10);
     memDataInit(MEM_ACCESSLOGENTRY, "AccessLogEntry",