     void prepareReply(HttpReply * rep);
     void packChunk(const StoreIOBuffer &bodyData, MemBuf &mb);
     void packRange(StoreIOBuffer const &, MemBuf * mb);
-    void deRegisterWithConn();
     void doClose();
     void initiateClose(const char *reason);
 