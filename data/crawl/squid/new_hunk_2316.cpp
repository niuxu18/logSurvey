            const char *value = TheConfig.client_username_encode ? old_base64_encode(name) : name;
            buf.Printf("%s: %s\r\n", TheConfig.client_username_header, value);
        }
    } else if (request->extacl_user.defined() && request->extacl_user.size()) {
        const char *value = TheConfig.client_username_encode ? old_base64_encode(request->extacl_user.termedBuf()) : request->extacl_user.termedBuf();
        buf.Printf("%s: %s\r\n", TheConfig.client_username_header, value);
    }
#endif
}