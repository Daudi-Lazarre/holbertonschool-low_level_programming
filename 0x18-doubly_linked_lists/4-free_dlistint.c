#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free the lsit
 * @head: pointer to the head of the list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *nextInLine;

	while (head != NULL)
	{
		nextInLine = head->next;
		free(head);
		head = nextInLine;
	}
}
