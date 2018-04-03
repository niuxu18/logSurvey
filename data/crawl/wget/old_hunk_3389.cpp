#endif /* SSLEAY_VERSION_NUMBER >= 0x00905100 */
}

/* Creates a SSL Context and sets some defaults for it */
uerr_t
init_ssl (SSL_CTX **ctx)
{
  SSL_METHOD *meth = NULL;
  int verify = SSL_VERIFY_NONE;
  SSL_library_init ();
  SSL_load_error_strings ();
  SSLeay_add_all_algorithms ();
  SSLeay_add_ssl_algorithms ();
  meth = SSLv23_client_method ();
  *ctx = SSL_CTX_new (meth);
  SSL_CTX_set_verify (*ctx, verify, verify_callback);
  if (*ctx == NULL) 
    return SSLERRCTXCREATE;
  if (opt.sslcertfile)
    {
      if (SSL_CTX_use_certificate_file (*ctx, opt.sslcertfile,
					SSL_FILETYPE_PEM) <= 0)
	return SSLERRCERTFILE;
      if (opt.sslcertkey == NULL) 
	opt.sslcertkey=opt.sslcertfile;
      if (SSL_CTX_use_PrivateKey_file (*ctx, opt.sslcertkey,
				       SSL_FILETYPE_PEM) <= 0)
	return SSLERRCERTKEY;
  }
  return 0; /* Succeded */
}

/* Sets up a SSL structure and performs the handshake on fd 
   Returns 0 if everything went right
   Returns 1 if something went wrong ----- TODO: More exit codes
*/
int
connect_ssl (SSL **con, SSL_CTX *ctx, int fd) 
{
  *con = (SSL *)SSL_new (ctx);
  SSL_set_fd (*con, fd);
  SSL_set_connect_state (*con); 
  SSL_connect (*con);  
  if ((*con)->state != SSL_ST_OK)
    return 1;
  /*while((SSLerror=ERR_get_error())!=0)
    printf("%s\n", ERR_error_string(SSLerror,NULL));*/

  return 0;
}

void
shutdown_ssl (SSL* con)
{
  SSL_shutdown (con);
  if (con != NULL)
    SSL_free (con);
}

void
free_ssl_ctx (SSL_CTX * ctx)
{
  SSL_CTX_free (ctx);
}

int
verify_callback (int ok, X509_STORE_CTX *ctx)
{
