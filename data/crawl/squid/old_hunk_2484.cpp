                    break;
            }
            if (!entry) {
                fprintf(stderr, "ERROR: '%s' (%s) depends on '%s'\n", directive, name, dep->name);
                exit(1);
            }
        }
        return;
    }
    fprintf(stderr, "ERROR: Dependencies for cf.data type '%s' used in '%s' not defined\n", name, directive);
    exit(1);
}

static void
usage(const char *program_name)
{
    fprintf(stderr, "Usage: %s cf.data cf.data.depend\n", program_name);
    exit(1);
}

int
main(int argc, char *argv[])
{
    FILE *fp;
    char *input_filename;
    const char *output_filename = _PATH_PARSER;
    const char *conf_filename = _PATH_SQUID_CONF;
