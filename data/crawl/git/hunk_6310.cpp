+#include "cache.h"
+#include "commit.h"
+#include "diff.h"
+#include "revision.h"
+#include "bisect.h"
+
+/* bits #0-15 in revision.h */
+
+#define COUNTED		(1u<<16)
+
+/*
+ * This is a truly stupid algorithm, but it's only
+ * used for bisection, and we just don't care enough.
+ *
+ * We care just barely enough to avoid recursing for
+ * non-merge entries.
+ */
+static int count_distance(struct commit_list *entry)
+{
+	int nr = 0;
+
+	while (entry) {
+		struct commit *commit = entry->item;
+		struct commit_list *p;
+
+		if (commit->object.flags & (UNINTERESTING | COUNTED))
+			break;
+		if (!(commit->object.flags & TREESAME))
+			nr++;
+		commit->object.flags |= COUNTED;
+		p = commit->parents;
+		entry = p;
+		if (p) {
+			p = p->next;
+			while (p) {
+				nr += count_distance(p);
+				p = p->next;
+			}
+		}
+	}
+
+	return nr;
+}
+
+static void clear_distance(struct commit_list *list)
+{
+	while (list) {
+		struct commit *commit = list->item;
+		commit->object.flags &= ~COUNTED;
+		list = list->next;
+	}
+}
+
+#define DEBUG_BISECT 0
+
+static inline int weight(struct commit_list *elem)
+{
+	return *((int*)(elem->item->util));
+}
+
+static inline void weight_set(struct commit_list *elem, int weight)
+{
+	*((int*)(elem->item->util)) = weight;
+}
+
+static int count_interesting_parents(struct commit *commit)
+{
+	struct commit_list *p;
+	int count;
+
+	for (count = 0, p = commit->parents; p; p = p->next) {
+		if (p->item->object.flags & UNINTERESTING)
+			continue;
+		count++;
+	}
+	return count;
+}
+
+static inline int halfway(struct commit_list *p, int nr)
+{
+	/*
+	 * Don't short-cut something we are not going to return!
+	 */
+	if (p->item->object.flags & TREESAME)
+		return 0;
+	if (DEBUG_BISECT)
+		return 0;
+	/*
+	 * 2 and 3 are halfway of 5.
+	 * 3 is halfway of 6 but 2 and 4 are not.
+	 */
+	switch (2 * weight(p) - nr) {
+	case -1: case 0: case 1:
+		return 1;
+	default:
+		return 0;
+	}
+}
+
+#if !DEBUG_BISECT
+#define show_list(a,b,c,d) do { ; } while (0)
+#else
+static void show_list(const char *debug, int counted, int nr,
+		      struct commit_list *list)
+{
+	struct commit_list *p;
+
+	fprintf(stderr, "%s (%d/%d)\n", debug, counted, nr);
+
+	for (p = list; p; p = p->next) {
+		struct commit_list *pp;
+		struct commit *commit = p->item;
+		unsigned flags = commit->object.flags;
+		enum object_type type;
+		unsigned long size;
+		char *buf = read_sha1_file(commit->object.sha1, &type, &size);
+		char *ep, *sp;
+
+		fprintf(stderr, "%c%c%c ",
+			(flags & TREESAME) ? ' ' : 'T',
+			(flags & UNINTERESTING) ? 'U' : ' ',
+			(flags & COUNTED) ? 'C' : ' ');
+		if (commit->util)
+			fprintf(stderr, "%3d", weight(p));
+		else
+			fprintf(stderr, "---");
+		fprintf(stderr, " %.*s", 8, sha1_to_hex(commit->object.sha1));
+		for (pp = commit->parents; pp; pp = pp->next)
+			fprintf(stderr, " %.*s", 8,
+				sha1_to_hex(pp->item->object.sha1));
+
+		sp = strstr(buf, "\n\n");
+		if (sp) {
+			sp += 2;
+			for (ep = sp; *ep && *ep != '\n'; ep++)
+				;
+			fprintf(stderr, " %.*s", (int)(ep - sp), sp);
+		}
+		fprintf(stderr, "\n");
+	}
+}
+#endif /* DEBUG_BISECT */
+
+static struct commit_list *best_bisection(struct commit_list *list, int nr)
+{
+	struct commit_list *p, *best;
+	int best_distance = -1;
+
+	best = list;
+	for (p = list; p; p = p->next) {
+		int distance;
+		unsigned flags = p->item->object.flags;
+
+		if (flags & TREESAME)
+			continue;
+		distance = weight(p);
+		if (nr - distance < distance)
+			distance = nr - distance;
+		if (distance > best_distance) {
+			best = p;
+			best_distance = distance;
+		}
+	}
+
+	return best;
+}
+
+struct commit_dist {
+	struct commit *commit;
+	int distance;
+};
+
+static int compare_commit_dist(const void *a_, const void *b_)
+{
+	struct commit_dist *a, *b;
+
+	a = (struct commit_dist *)a_;
+	b = (struct commit_dist *)b_;
+	if (a->distance != b->distance)
+		return b->distance - a->distance; /* desc sort */
+	return hashcmp(a->commit->object.sha1, b->commit->object.sha1);
+}
+
+static struct commit_list *best_bisection_sorted(struct commit_list *list, int nr)
+{
+	struct commit_list *p;
+	struct commit_dist *array = xcalloc(nr, sizeof(*array));
+	int cnt, i;
+
+	for (p = list, cnt = 0; p; p = p->next) {
+		int distance;
+		unsigned flags = p->item->object.flags;
+
+		if (flags & TREESAME)
+			continue;
+		distance = weight(p);
+		if (nr - distance < distance)
+			distance = nr - distance;
+		array[cnt].commit = p->item;
+		array[cnt].distance = distance;
+		cnt++;
+	}
+	qsort(array, cnt, sizeof(*array), compare_commit_dist);
+	for (p = list, i = 0; i < cnt; i++) {
+		struct name_decoration *r = xmalloc(sizeof(*r) + 100);
+		struct object *obj = &(array[i].commit->object);
+
+		sprintf(r->name, "dist=%d", array[i].distance);
+		r->next = add_decoration(&name_decoration, obj, r);
+		p->item = array[i].commit;
+		p = p->next;
+	}
+	if (p)
+		p->next = NULL;
+	free(array);
+	return list;
+}
+
+/*
+ * zero or positive weight is the number of interesting commits it can
+ * reach, including itself.  Especially, weight = 0 means it does not
+ * reach any tree-changing commits (e.g. just above uninteresting one
+ * but traversal is with pathspec).
+ *
+ * weight = -1 means it has one parent and its distance is yet to
+ * be computed.
+ *
+ * weight = -2 means it has more than one parent and its distance is
+ * unknown.  After running count_distance() first, they will get zero
+ * or positive distance.
+ */
+static struct commit_list *do_find_bisection(struct commit_list *list,
+					     int nr, int *weights,
+					     int find_all)
+{
+	int n, counted;
+	struct commit_list *p;
+
+	counted = 0;
+
+	for (n = 0, p = list; p; p = p->next) {
+		struct commit *commit = p->item;
+		unsigned flags = commit->object.flags;
+
+		p->item->util = &weights[n++];
+		switch (count_interesting_parents(commit)) {
+		case 0:
+			if (!(flags & TREESAME)) {
+				weight_set(p, 1);
+				counted++;
+				show_list("bisection 2 count one",
+					  counted, nr, list);
+			}
+			/*
+			 * otherwise, it is known not to reach any
+			 * tree-changing commit and gets weight 0.
+			 */
+			break;
+		case 1:
+			weight_set(p, -1);
+			break;
+		default:
+			weight_set(p, -2);
+			break;
+		}
+	}
+
+	show_list("bisection 2 initialize", counted, nr, list);
+
+	/*
+	 * If you have only one parent in the resulting set
+	 * then you can reach one commit more than that parent
+	 * can reach.  So we do not have to run the expensive
+	 * count_distance() for single strand of pearls.
+	 *
+	 * However, if you have more than one parents, you cannot
+	 * just add their distance and one for yourself, since
+	 * they usually reach the same ancestor and you would
+	 * end up counting them twice that way.
+	 *
+	 * So we will first count distance of merges the usual
+	 * way, and then fill the blanks using cheaper algorithm.
+	 */
+	for (p = list; p; p = p->next) {
+		if (p->item->object.flags & UNINTERESTING)
+			continue;
+		if (weight(p) != -2)
+			continue;
+		weight_set(p, count_distance(p));
+		clear_distance(list);
+
+		/* Does it happen to be at exactly half-way? */
+		if (!find_all && halfway(p, nr))
+			return p;
+		counted++;
+	}
+
+	show_list("bisection 2 count_distance", counted, nr, list);
+
+	while (counted < nr) {
+		for (p = list; p; p = p->next) {
+			struct commit_list *q;
+			unsigned flags = p->item->object.flags;
+
+			if (0 <= weight(p))
+				continue;
+			for (q = p->item->parents; q; q = q->next) {
+				if (q->item->object.flags & UNINTERESTING)
+					continue;
+				if (0 <= weight(q))
+					break;
+			}
+			if (!q)
+				continue;
+
+			/*
+			 * weight for p is unknown but q is known.
+			 * add one for p itself if p is to be counted,
+			 * otherwise inherit it from q directly.
+			 */
+			if (!(flags & TREESAME)) {
+				weight_set(p, weight(q)+1);
+				counted++;
+				show_list("bisection 2 count one",
+					  counted, nr, list);
+			}
+			else
+				weight_set(p, weight(q));
+
+			/* Does it happen to be at exactly half-way? */
+			if (!find_all && halfway(p, nr))
+				return p;
+		}
+	}
+
+	show_list("bisection 2 counted all", counted, nr, list);
+
+	if (!find_all)
+		return best_bisection(list, nr);
+	else
+		return best_bisection_sorted(list, nr);
+}
+
+struct commit_list *find_bisection(struct commit_list *list,
+					  int *reaches, int *all,
+					  int find_all)
+{
+	int nr, on_list;
+	struct commit_list *p, *best, *next, *last;
+	int *weights;
+
+	show_list("bisection 2 entry", 0, 0, list);
+
+	/*
+	 * Count the number of total and tree-changing items on the
+	 * list, while reversing the list.
+	 */
+	for (nr = on_list = 0, last = NULL, p = list;
+	     p;
+	     p = next) {
+		unsigned flags = p->item->object.flags;
+
+		next = p->next;
+		if (flags & UNINTERESTING)
+			continue;
+		p->next = last;
+		last = p;
+		if (!(flags & TREESAME))
+			nr++;
+		on_list++;
+	}
+	list = last;
+	show_list("bisection 2 sorted", 0, nr, list);
+
+	*all = nr;
+	weights = xcalloc(on_list, sizeof(*weights));
+
+	/* Do the real work of finding bisection commit. */
+	best = do_find_bisection(list, nr, weights, find_all);
+	if (best) {
+		if (!find_all)
+			best->next = NULL;
+		*reaches = weight(best);
+	}
+	free(weights);
+	return best;
+}
+