 }
 
 void
-comm_read(int fd, char *buf, int size, IOCB *handler, void *handler_data)
+comm_read(const Comm::ConnectionPointer &conn, char *buf, int size, IOCB *handler, void *handler_data)
 {
     fatal ("Not implemented");
 }
 
 void
-comm_read(int, char*, int, AsyncCall::Pointer &callback)
+comm_read(const Comm::ConnectionPointer &conn, char*, int, AsyncCall::Pointer &callback)
 {
     fatal ("Not implemented");
 }
 
 /* should be in stub_CommRead */
 #include "CommRead.h"
-CommRead::CommRead (int fd, char *buf, int len, AsyncCall::Pointer &callback)
+CommRead::CommRead(const Comm::ConnectionPointer &, char *buf, int len, AsyncCall::Pointer &callback)
 {
     fatal ("Not implemented");
 }
