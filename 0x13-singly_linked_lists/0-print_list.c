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


	/* While h exists, */
	/* if the head node with string data is comparable to NULL, */
	/* If the string node is NULL, print this. */
	/* In all other cases, print the node digit and string. */

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		num++;
		h = h->next;
	}
	return(num);
}
