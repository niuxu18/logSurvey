            debugs(11, DBG_IMPORTANT, "http handleMoreRequestBodyAvailable: Likely proxy abuse detected '" << request->client_addr << "' -> '" << entry->url() << "'" );

            if (virginReply()->sline.status() == Http::scInvalidHeader) {
                closeServer();
                mustStop("HttpStateData::handleMoreRequestBodyAvailable");
                return;
            }
        }