    storeAppendPrintf(e, "%s digest: size: %d bytes\n",
                      label ? label : "", stats.bit_count / 8
                     );
    storeAppendPrintf(e, "\t entries: count: %d capacity: %d util: %d%%\n",
                      cd->count,
                      cd->capacity,
                      xpercentInt(cd->count, cd->capacity)
                     );
    storeAppendPrintf(e, "\t deletion attempts: %d\n",
                      cd->del_count
                     );
    storeAppendPrintf(e, "\t bits: per entry: %d on: %d capacity: %d util: %d%%\n",
