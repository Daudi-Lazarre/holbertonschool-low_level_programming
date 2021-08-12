#include "lists.h"

/**
 * free_listint2 - free list
 * @head: pointer to head
 * Return: Return
 */

void free_listint2(listint_t **head)
{
	listint_t *buff_baby;

	if (head == NULL)
		return;
	while (*head)
	{
		buff_baby = (*head)->next;
		free(*head);
		*head = buff_baby;
	}
	*head = NULL;
}
