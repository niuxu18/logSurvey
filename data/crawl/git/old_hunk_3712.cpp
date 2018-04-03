	Insert 'progress' statements every <n> objects, to be shown by
	'git fast-import' during import.

	Specify how to handle signed tags.  Since any transformation
	after the export can change the tag names (which can also happen
	when excluding revisions) the signatures will not match.
+
When asking to 'abort' (which is the default), this program will die
when encountering a signed tag.  With 'strip', the tags will be made
unsigned, with 'verbatim', they will be silently exported
and with 'warn', they will be exported, but you will see a warning.

--tag-of-filtered-object=(abort|drop|rewrite)::
	Specify how to handle tags whose tagged object is filtered out.
