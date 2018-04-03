#include "commit.h"
#include "prio-queue.h"

void prio_queue_reverse(struct prio_queue *queue)
{
	int i, j;

	if (queue->compare != NULL)
		die("BUG: prio_queue_reverse() on non-LIFO queue");
	for (i = 0; i <= (j = (queue->nr - 1) - i); i++) {
		struct commit *swap = queue->array[i];
		queue->array[i] = queue->array[j];
		queue->array[j] = swap;
	}
}

void clear_prio_queue(struct prio_queue *queue)
{
	free(queue->array);
