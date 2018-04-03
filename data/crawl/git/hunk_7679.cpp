 	}
 }
 
+sub rebuild_from_rev_db {
+	my ($self, $path) = @_;
+	my $r = -1;
+	open my $fh, '<', $path or croak "open: $!";
+	while (<$fh>) {
+		length($_) == 41 or croak "inconsistent size in ($_) != 41";
+		chomp($_);
+		++$r;
+		next if $_ eq ('0' x 40);
+		$self->rev_map_set($r, $_);
+		print "r$r = $_\n";
+	}
+	close $fh or croak "close: $!";
+	unlink $path or croak "unlink: $!";
+}
+
 sub rebuild {
 	my ($self) = @_;
-	my $db_path = $self->db_path;
-	return if (-e $db_path && ! -z $db_path);
+	my $map_path = $self->map_path;
+	return if (-e $map_path && ! -z $map_path);
 	return unless ::verify_ref($self->refname.'^0');
-	if (-f $self->{db_root}) {
-		rename $self->{db_root}, $db_path or die
-		     "rename $self->{db_root} => $db_path failed: $!\n";
-		my ($dir, $base) = ($db_path =~ m#^(.*?)/?([^/]+)$#);
-		symlink $base, $self->{db_root} or die
-		     "symlink $base => $self->{db_root} failed: $!\n";
+	if ($self->use_svm_props || $self->no_metadata) {
+		my $rev_db = $self->rev_db_path;
+		$self->rebuild_from_rev_db($rev_db);
+		if ($self->use_svm_props) {
+			my $svm_rev_db = $self->rev_db_path($self->svm_uuid);
+			$self->rebuild_from_rev_db($svm_rev_db);
+		}
+		$self->unlink_rev_db_symlink;
 		return;
 	}
-	print "Rebuilding $db_path ...\n";
-	my ($log, $ctx) = command_output_pipe("log", '--no-color', $self->refname);
-	my $latest;
+	print "Rebuilding $map_path ...\n";
+	my ($log, $ctx) =
+	    command_output_pipe(qw/rev-list --pretty=raw --no-color --reverse/,
+	                        $self->refname, '--');
 	my $full_url = $self->full_url;
 	remove_username($full_url);
-	my $svn_uuid;
+	my $svn_uuid = $self->ra_uuid;
 	my $c;
 	while (<$log>) {
 		if ( m{^commit ($::sha1)$} ) {
