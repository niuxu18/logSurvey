        list = list->next;
    }

    storeAppendPrintf(entry, "\n%s %s keep_alive %s\n", name, "negotiate", keep_alive ? "on" : "off");
    Auth::Config::dump(entry, name, scheme);
}

