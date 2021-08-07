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

	while (h) /* When h exists*/
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		num++;
		h = h->next;
	}
	return(num);
/* if the head string is identical to NULL, print this. If not, then this. */
/* increment through the linked list */
/* return num */
}
