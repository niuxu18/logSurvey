#ifdef  HAVE_GETCWD
          perror_with_name ("getcwd", "");
#else
          OS (error, NILF, "getwd: %s", current_directory);
#endif
          starting_directory = 0;
        }