#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a list
 * @h: pointer to node
 * Return: Node number
 */

size_t print_listint(const listint_t *h)
{
	size_t incrementNodeNum = 0;

	if (!h)
		return (0);

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		incrementNodeNum++;
	}
	return (incrementNodeNum);
}
