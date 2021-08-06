#include "lists.h"
#include <stdio.h>

/**
 * print_list - Print the nodes
 * @h: The head of the list, which is the first node
 * Return: The node amount
 */

size_t print_list(const list_t *h)
{
	size_t num = 0;


	/* Increment through num && hop to the next pointer when... */
	/* the node pointer is not the last one */
	/* If the string node is NULL, print this. */
	/* In all other cases, print the node digit and string. */
	do
	{
		num++;
		h = h->next;
	}
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
	}
	return (num);
}
