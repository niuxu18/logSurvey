 			# So let's support that, too.
 			$input_format = 'lots';
 			if (@cc == 0 && !$suppress_cc{'cc'}) {
-				printf("(non-mbox) Adding cc: %s from line '%s'\n",
+				printf(__("(non-mbox) Adding cc: %s from line '%s'\n"),
 					$_, $_) unless $quiet;
 				push @cc, $_;
 			} elsif (!defined $subject) {
