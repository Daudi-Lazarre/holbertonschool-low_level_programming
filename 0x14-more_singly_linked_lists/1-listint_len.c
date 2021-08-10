#include "lists.h"

/**
 * listint_len - Number of elements
 * @h: The linked list that's printed
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t incrementElem;

	for (incrementElem = 0; h; incrementElem++)
		h = h->next;
	return (incrementElem);
}
