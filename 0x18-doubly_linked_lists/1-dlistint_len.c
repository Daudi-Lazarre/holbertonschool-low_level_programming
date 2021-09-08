#include "lists.h"

/**
 * dlistint_len - List length
 * @h: head
 *
 * Return: node num
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num;

	for (num = 0; h; num++)
		h = h->next;
	return (num);
}
