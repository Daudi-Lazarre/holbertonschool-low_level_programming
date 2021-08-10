#include "lists.h"

/**
 * pop_listint - off with the head >:)
 * @head: first node
 * Return: number
 */

int pop_listint(listint_t **head)
{
	listint_t *buff_baby;
	int num;

	if (!head || !*head)
		return (0);
	num = (*head)->n;
	buff_baby = (*head)->next;
	free(*head);
	*head = buff_baby;
	return (num);
}
