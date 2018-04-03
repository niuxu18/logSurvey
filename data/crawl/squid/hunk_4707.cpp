     void failReply (HttpReply *reply, http_status const &status);
     void keepaliveAccounting(HttpReply *);
     void checkDateSkew(HttpReply *);
-    void haveParsedReplyHeaders();
-    void transactionComplete();
-    void writeReplyBody(const char *data, int len);
-    void sendRequestEntityDone();
+
+    virtual void haveParsedReplyHeaders();
+    virtual void closeServer(); // end communication with the server
+    virtual bool doneWithServer() const; // did we end communication?
+    virtual void abortTransaction(const char *reason); // abnormal termination
+
+    // consuming request body
+    virtual void handleMoreRequestBodyAvailable();
+    virtual void handleRequestBodyProducerAborted();
+
+    void writeReplyBody();
+    void doneSendingRequestBody();
     void requestBodyHandler(MemBuf &);
-    void sendRequestEntity(int fd, size_t size, comm_err_t errflag);
+    virtual void sentRequestBody(int fd, size_t size, comm_err_t errflag);
     mb_size_t buildRequestPrefix(HttpRequest * request,
                                  HttpRequest * orig_request,
                                  StoreEntry * entry,