	 if (strcmp ($1.key, $2) != 0)
	 {
		printf ("block_begin = %s; block_end = %s;\n", $1.key, $2);
		yyerror("block not closed");
		YYERROR;
	 }
	 free ($2); $2 = NULL;
	 $$ = $1;
