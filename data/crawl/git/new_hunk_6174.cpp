			/* Have we already had a message ID? */
			if (rev.message_id) {
				/*
				 * For deep threading: make every mail
				 * a reply to the previous one, no
				 * matter what other options are set.
				 *
				 * For shallow threading:
				 *
				 * Without --cover-letter and
				 * --in-reply-to, make every mail a
				 * reply to the one before.
				 *
				 * With --in-reply-to but no
				 * --cover-letter, make every mail a
				 * reply to the <reply-to>.
				 *
				 * With --cover-letter, make every
				 * mail but the cover letter a reply
				 * to the cover letter.  The cover
				 * letter is a reply to the
				 * --in-reply-to, if specified.
				 */
				if (thread == THREAD_SHALLOW
				    && rev.ref_message_ids->nr > 0
				    && (!cover_letter || rev.nr > 1))
					free(rev.message_id);
				else
					string_list_append(rev.message_id,
							   rev.ref_message_ids);
			}
			gen_message_id(&rev, sha1_to_hex(commit->object.sha1));
		}

		if (!use_stdout && reopen_stdout(numbered_files ? NULL : commit,
						 &rev))
			die("Failed to create output files");
		shown = log_tree_commit(&rev, commit);
		free(commit->buffer);