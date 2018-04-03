time_t edui_now;
time_t edui_elap;

/* local_debug() -
 *
 * Print formatted message of func() to stderr if EDUI_MODE_DEBUG is set.
 *
 */
/*
void local_debug(const char *func, const char *msg,...)
{
    char prog[EDUI_MAXLEN], dbuf[EDUI_MAXLEN], cbuf[EDUI_MAXLEN], bbuf[EDUI_MAXLEN];
    size_t sz, x;
    va_list ap;
    if (!(edui_conf.mode & EDUI_MODE_DEBUG))
        return;

    if (edui_conf.program[0] == '\0')
        xstrncpy(prog, EDUI_PROGRAM_NAME, sizeof(prog));
    else
        xstrncpy(prog, edui_conf.program, sizeof(prog));
    if ((func == NULL) || (msg == NULL) || (strlen(prog) > 256)) {
        snprintf(dbuf, sizeof(dbuf), "%s: local_debug() EPIC FAILURE.\n", prog);
        fputs(dbuf, stderr);
        return;
    }
    sz = sizeof(dbuf);
    memset(cbuf, '\0', sizeof(cbuf));
    xstrncpy(cbuf, prog, sizeof(cbuf));
    strncat(cbuf, ": [DB] ", 7);
    strncat(cbuf, func, strlen(func));
    strncat(cbuf, "() - ", 5);
    va_start(ap, msg);
    x = vsnprintf(dbuf, sz, msg, ap);
    va_end(ap);
    if (x > 0) {
        strncat(cbuf, dbuf, x);
        fputs(cbuf, stderr);
        memset(dbuf, '\0', sizeof(dbuf));
    } else {
        snprintf(bbuf, sz, "%s: local_debug(%s) FAILURE: %zd\n", prog, dbuf, x);
        fputs(bbuf, stderr);
    }
}
*/
/* local_debugx() -
 *
 * Print formatted message to stderr if EDUI_MODE_DEBUG is set, without preformatting.
 *
 */
/*
void local_debugx(const char *msg,...)
{
    char prog[EDUI_MAXLEN], dbuf[EDUI_MAXLEN], bbuf[EDUI_MAXLEN];
    size_t sz, x;
    va_list ap;
    if (!(edui_conf.mode & EDUI_MODE_DEBUG))
        return;

    if (edui_conf.program[0] == '\0')
        xstrncpy(prog, EDUI_PROGRAM_NAME, sizeof(prog));
    else
        xstrncpy(prog, edui_conf.program, sizeof(prog));
    if ((msg == NULL) || (strlen(prog) > 256)) {
        snprintf(dbuf, sizeof(dbuf), "%s: local_debugx() EPIC FAILURE.\n", prog);
        fputs(dbuf, stderr);
        return;
    }
    sz = sizeof(dbuf);
    va_start(ap, msg);
    x = vsnprintf(dbuf, sz, msg, ap);
    va_end(ap);
    if (x > 0) {
        fputs(dbuf, stderr);
        memset(dbuf, '\0', sizeof(dbuf));
    } else {
        snprintf(bbuf, sz, "%s: local_debugx(%s) FAILURE: %zd\n", prog, dbuf, x);
        fputs(bbuf, stderr);
    }
}
*/

/* local_printfx() -
 *
 * Print formatted message to stderr AND stdout, without preformatting.
