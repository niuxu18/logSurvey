            const int saved_id = err->page_id;
            err->page_id = ERR_SQUID_SIGNATURE;
            MemBuf *sign_mb = errorBuildContent(err);
            memBufPrintf(&mb, "%s", sign_mb->content());
            memBufClean(sign_mb);
            delete sign_mb;
            err->page_id = saved_id;
            do_quote = 0;
