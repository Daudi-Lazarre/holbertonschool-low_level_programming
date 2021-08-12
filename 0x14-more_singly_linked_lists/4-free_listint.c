#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Free everything
 * @head: Tip of the list
 * Return: Free the space
 */

void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
