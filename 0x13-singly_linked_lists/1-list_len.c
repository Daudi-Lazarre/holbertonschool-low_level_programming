#include "lists.h"

/**
 * list_len - Lists the number of elements in the linked list
 * @h: The first node; the head and NOT the tail
 * Return: Total number of nodes in that thang
 */

size_t list_len(const list_t *h)
{
	size_t node_num = 0;

	while (h != NULL) /* When h looks like NULL */
	{
		node_num++;
		h = h->next;
	}
	/* Go through the linked list and increment the number */
	return (num);
}
