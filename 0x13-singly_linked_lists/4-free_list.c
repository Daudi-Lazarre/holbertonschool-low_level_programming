#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees all of the nodes
 * @head: linked list start
 * Return: nothingness
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		free(head->str);
		free(head);
	}
}
