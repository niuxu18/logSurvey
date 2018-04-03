     X509_NAME_oneline(X509_get_subject_name(peer_cert), buffer,
                       sizeof(buffer));
 
+    // detect infinite loops
+    uint32_t *validationCounter = static_cast<uint32_t *>(SSL_get_ex_data(ssl, ssl_ex_index_ssl_validation_counter));
+    if (!validationCounter) {
+        validationCounter = new uint32_t(1);
+        SSL_set_ex_data(ssl, ssl_ex_index_ssl_validation_counter, validationCounter);
+    } else {
+        // overflows allowed if SQUID_CERT_VALIDATION_ITERATION_MAX >= UINT32_MAX
+        (*validationCounter)++;
+    }
+
+    if ((*validationCounter) >= SQUID_CERT_VALIDATION_ITERATION_MAX) {
+        ok = 0; // or the validation loop will never stop
+        error_no = SQUID_X509_V_ERR_INFINITE_VALIDATION;
+        debugs(83, 2, "SQUID_X509_V_ERR_INFINITE_VALIDATION: " <<
+               *validationCounter << " iterations while checking " << buffer);
+    }
+
     if (ok) {
         debugs(83, 5, "SSL Certificate signature OK: " << buffer);
 
