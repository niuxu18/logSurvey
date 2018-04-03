      goto out;
    }

  if (status & GNUTLS_CERT_INVALID)
    {
      logprintf (LOG_NOTQUIET, _("%s: The certificate of %s is not trusted.\n"),
                 severity, quote (host));
      success = false;
    }
  if (status & GNUTLS_CERT_SIGNER_NOT_FOUND)
    {
      logprintf (LOG_NOTQUIET, _("%s: The certificate of %s hasn't got a known issuer.\n"),
                 severity, quote (host));
      success = false;
    }
  if (status & GNUTLS_CERT_REVOKED)
    {
      logprintf (LOG_NOTQUIET, _("%s: The certificate of %s has been revoked.\n"),
                 severity, quote (host));
      success = false;
    }

  if (gnutls_certificate_type_get (ctx->session) == GNUTLS_CRT_X509)
    {
