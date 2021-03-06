 
 /**
  * Badly named.
- * This is in fact the processing context for a single HTTP request.
+ * This is in fact the processing context for a single HTTP transaction.
  *
- * Managing what has been done, and what happens next to the data buffer
- * holding what we hope is an HTTP request.
+ * A context lifetime extends from directly after a request has been parsed
+ * off the client connection buffer, until the last byte of both request
+ * and reply payload (if any) have been written.
  *
- * Parsing is still a mess of global functions done in conjunction with the
- * real socket controller which generated ClientHttpRequest.
- * It also generates one of us and passes us control from there based on
- * the results of the parse.
+ * (NOTE: it is not certain yet if an early reply to a POST/PUT is sent by
+ * the server whether the context will remain in the pipeline until its
+ * request payload has finished being read. It is supposed to, but may not)
  *
- * After that all the request interpretation and adaptation is in our scope.
- * Then finally the reply fetcher is created by this and we get the result
- * back. Which we then have to manage writing of it to the ConnStateData.
+ * Contexts self-register with the Pipeline being managed by the Server
+ * for the connection on which the request was received.
  *
- * The socket level management is done by a ConnStateData which owns us.
+ * When HTTP/1 pipeline is operating there may be multiple transactions using
+ * the clientConnection. Only the back() context may read from the connection,
+ * and only the front() context may write to it. A context which needs to read
+ * or write to the connection but does not meet those criteria must be shifted
+ * to the deferred state.
+ *
+ * When a context is completed the finished() method needs to be called which
+ * will perform all cleanup and deregistration operations. If the reason for
+ * finishing is an error, then notifyIoError() needs to be called prior to
+ * the finished() method.
+ * Alternatively the initiateClose() method can be called to terminate the
+ * whole client connection and all other pending contexts.
+ *
+ * The socket level management is done by a Server which owns us.
  * The scope of this objects control over a socket consists of the data
- * buffer received from ConnStateData with an initially unknown length.
- * When that length is known it sets the end bounary of our acces to the
+ * buffer received from the Server with an initially unknown length.
+ * When that length is known it sets the end boundary of our access to the
  * buffer.
  *
  * The individual processing actions are done by other Jobs which we
