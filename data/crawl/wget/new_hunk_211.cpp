          *(s + len - outlen - done) = '\0';
          xfree(in_save);
          iconv_close(cd);
          DEBUGP (("converted '%s' (%s) -> '%s' (%s)\n", in_org, fromcode, *out, tocode));
          return true;
        }

