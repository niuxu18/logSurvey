 }
 
 void *
-Auth::UserRequest::operator new (size_t byteCount)
+Auth::UserRequest::operator new (size_t)
 {
     fatal("Auth::UserRequest not directly allocatable\n");
     return (void *)1;
 }
 
 void
-Auth::UserRequest::operator delete (void *address)
+Auth::UserRequest::operator delete (void *)
 {
     fatal("Auth::UserRequest child failed to override operator delete\n");
 }
