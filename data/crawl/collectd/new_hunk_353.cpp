		XSRETURN_EMPTY;
	}

	plugin_log (SvIV (ST (0)), "%s", SvPV_nolen (ST (1)));
	XSRETURN_YES;
} /* static XS (Collectd_plugin_log) */

