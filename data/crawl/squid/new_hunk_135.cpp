            if (!SSL_CTX_use_PrivateKey_file(ctx.get(), keyfile, SSL_FILETYPE_PEM)) {
                const int ssl_error = ERR_get_error();
                fatalf("Failed to acquire SSL private key '%s': %s\n",
                       keyfile, Security::ErrorString(ssl_error));
            }

            debugs(83, 5, "Comparing private and public SSL keys.");

            if (!SSL_CTX_check_private_key(ctx.get())) {
                const int ssl_error = ERR_get_error();
                fatalf("SSL private key '%s' does not match public key '%s': %s\n",
                       certfile, keyfile, Security::ErrorString(ssl_error));
            }
        }
    }
