    /* ok, user saw [0,Ctx_Reported_Level] descriptions */
    /* first inform about entries popped since user saw them */
    if (Ctx_Valid_Level < Ctx_Reported_Level) {
	_db_print("ctx: exit: from %2d downto %2d\n", 
	    Ctx_Reported_Level, Ctx_Valid_Level+1);
	Ctx_Reported_Level = Ctx_Valid_Level;
    }
    /* report new contexts that were pushed since last report */
    while (Ctx_Reported_Level < Ctx_Current_Level) {
	Ctx_Reported_Level++;
	Ctx_Valid_Level++;
	_db_print("ctx: enter: %2d '%s'\n", Ctx_Reported_Level, 
	    ctx_get_descr(Ctx_Reported_Level));
    }
    /* unlock */