#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * delete_nodeint_at_index - delYEET the node
 * @head: head
 * @index: which node do you want to delete?
 * Return: Pointer at head
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *current;
	listint_t *otherNext;

	if (!head || !*head)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}
	for (x = 0; x < (index - 1); x++)
	{
		current = current->next;
		if (current == NULL)
			return (-1);
	}
	otherNext = current->next;
	current->next = otherNext->next;
	free(otherNext);
	return (1);
}
