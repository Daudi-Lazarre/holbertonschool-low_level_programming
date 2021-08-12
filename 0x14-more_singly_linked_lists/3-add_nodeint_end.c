#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Add a new node at the end of the list
 * @head: The head of the node
 * @n: Number added
 * Return: Pointer
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tail;
	listint_t *x;

	tail = malloc(sizeof(listint_t));
	if (tail == NULL)
		return (NULL);
	tail->n = n;
	tail->next = NULL;
	if (*head == NULL)
	{
		*head = tail;
		return (*head);
	}
	x = *head;
	while (x->next != NULL)
		x = x->next;
	x->next = tail;
	return (*head);
}
