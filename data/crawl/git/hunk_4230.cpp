 
 -o::
 --others::
-	Show other files in the output
+	Show other (i.e. untracked) files in the output
 
 -i::
 --ignored::
-	Show ignored files in the output.
-	Note that this also reverses any exclude list present.
+	Show only ignored files in the output. When showing files in the
+	index, print only those matched by an exclude pattern. When
+	showing "other" files, show only those matched by an exclude
+	pattern.
 
 -s::
 --stage::
-	Show stage files in the output
+	Show staged contents' object name, mode bits and stage number in the output.
 
 --directory::
 	If a whole directory is classified as "other", show just its
