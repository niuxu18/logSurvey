typedef RefCount<Store> StorePointer;

/// \ingroup StoreAPI
SQUIDCEXTERN size_t storeEntryInUse();

/// \ingroup StoreAPI
SQUIDCEXTERN const char *storeEntryFlags(const StoreEntry *);

/// \ingroup StoreAPI
extern void storeEntryReplaceObject(StoreEntry *, HttpReply *);

/// \ingroup StoreAPI
SQUIDCEXTERN StoreEntry *storeGetPublic(const char *uri, const HttpRequestMethod& method);

/// \ingroup StoreAPI
SQUIDCEXTERN StoreEntry *storeGetPublicByRequest(HttpRequest * request);

/// \ingroup StoreAPI
SQUIDCEXTERN StoreEntry *storeGetPublicByRequestMethod(HttpRequest * request, const HttpRequestMethod& method);

/// \ingroup StoreAPI
class RequestFlags;
extern StoreEntry *storeCreateEntry(const char *, const char *, const RequestFlags &, const HttpRequestMethod&);

/// \ingroup StoreAPI
SQUIDCEXTERN void storeInit(void);

/// \ingroup StoreAPI
SQUIDCEXTERN void storeConfigure(void);

/// \ingroup StoreAPI
SQUIDCEXTERN void storeFreeMemory(void);

/// \ingroup StoreAPI
SQUIDCEXTERN int expiresMoreThan(time_t, time_t);

/// \ingroup StoreAPI
SQUIDCEXTERN void storeAppendPrintf(StoreEntry *, const char *,...) PRINTF_FORMAT_ARG2;

/// \ingroup StoreAPI
extern void storeAppendVPrintf(StoreEntry *, const char *, va_list ap);

/// \ingroup StoreAPI
SQUIDCEXTERN int storeTooManyDiskFilesOpen(void);

class SwapDir;
/// \ingroup StoreAPI
SQUIDCEXTERN void storeHeapPositionUpdate(StoreEntry *, SwapDir *);

/// \ingroup StoreAPI
SQUIDCEXTERN void storeSwapFileNumberSet(StoreEntry * e, sfileno filn);

/// \ingroup StoreAPI
SQUIDCEXTERN void storeFsInit(void);

/// \ingroup StoreAPI
SQUIDCEXTERN void storeFsDone(void);

/// \ingroup StoreAPI
SQUIDCEXTERN void storeReplAdd(const char *, REMOVALPOLICYCREATE *);

/// \ingroup StoreAPI
extern FREE destroyStoreEntry;
