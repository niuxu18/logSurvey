 * Reports
 */

/* tmp variable used to pass stat info to dumpers */
extern const HttpHeaderStat *dump_stat; /* argh! */
const HttpHeaderStat *dump_stat = NULL;

static void
httpHeaderFieldStatDumper(StoreEntry * sentry, int idx, double val, double size, int count)
{
    const int id = (int) val;
    const int valid_id = id >= 0 && id < HDR_ENUM_END;
    const char *name = valid_id ? strBuf(Headers[id].name) : "INVALID";
    int visible = count > 0;
    /* for entries with zero count, list only those that belong to current type of message */
    if (!visible && valid_id && dump_stat->owner_mask)
	visible = CBIT_TEST(*dump_stat->owner_mask, id);
    if (visible)
	storeAppendPrintf(sentry, "%2d\t %-20s\t %5d\t %6.2f\t %d\n",
	    id, name, count, xdiv(count, dump_stat->busyDestroyedCount),
	    visible);
}

static void
