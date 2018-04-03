  *
  */
 
-#ifndef SQUID_ICAPANCHOR_H
-#define SQUID_ICAPANCHOR_H
+#ifndef SQUID_ICAPCLIENTRESPMODPRECACHE_H
+#define SQUID_ICAPCLIENTRESPMODPRECACHE_H
 
-#include "MsgPipe.h"
-#include "MsgPipeSource.h"
-#include "MsgPipeSink.h"
-#include "ICAPServiceRep.h"
+#include "ICAPClientVector.h"
 
-/* The ICAP Anchor implements message pipe sink and source interfaces.  It
- * helps ServerStateData to marshall the incoming/virgin HTTP message (being
- * recieved from the HTTP server) to Squid's ICAP client module, using the
- * MsgPipe interface. The same interface is used to get the adapted HTTP
- * message back from the ICAP client. ServerStateData is the "owner" of the
- * ICAPClientRespmodPrecache.
+/*
+ * ICAPClientRespmodPrecache implements the server-side pre-cache ICAP
+ * vectoring point using ICAPClientVector as a parent.
+ * ServerStateData is the Owner of this vectoring point.
  */
 
-class HttpRequest;
-
-class HttpReply;
+class ServerStateData;
 
-class ICAPClientRespmodPrecache: public MsgPipeSource, public MsgPipeSink
+class ICAPClientRespmodPrecache: public ICAPClientVector
 {
 
 public:
     ICAPClientRespmodPrecache(ICAPServiceRep::Pointer);
-    virtual ~ICAPClientRespmodPrecache();
 
     // synchronous calls called by ServerStateData
     void startRespMod(ServerStateData *anServerState, HttpRequest *request, HttpReply *reply);
-    void sendMoreData(StoreIOBuffer buf);
-    void doneSending();
-    void ownerAbort();
-    int potentialSpaceSize();	/* how much data can we accept? */
 
     // pipe source methods; called by ICAP while receiving the virgin message
-    virtual void noteSinkNeed(MsgPipe *p);
-    virtual void noteSinkAbort(MsgPipe *p);
 
     // pipe sink methods; called by ICAP while sending the adapted message
     virtual void noteSourceStart(MsgPipe *p);
     virtual void noteSourceProgress(MsgPipe *p);
-    virtual void noteSourceFinish(MsgPipe *p);
-    virtual void noteSourceAbort(MsgPipe *p);
+
+protected:
+    virtual void tellSpaceAvailable();
+    virtual void tellDoneAdapting(); // deletes us
+    virtual void tellAbortAdapting(); // deletes us
 
 public:
-    ICAPServiceRep::Pointer service;
     ServerStateData *serverState;
-    MsgPipe::Pointer virgin;
-    MsgPipe::Pointer adapted;
 
 private:
-    typedef enum { notifyNone, notifyOwner, notifyIcap } Notify;
-    void stop(Notify notify);
-    void freeVirgin();
-    void freeAdapted();
     CBDATA_CLASS2(ICAPClientRespmodPrecache);
 };
 
-#endif /* SQUID_ICAPANCHOR_H */
+#endif /* SQUID_ICAPCLIENTRESPMODPRECACHE_H */
