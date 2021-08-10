#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - new node whenever and wherever you want, or your money back
 * @head: head
 * @index: insert here
 * @n: the number value
 * Return: the new node position
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *thisOne;
	listin_t *newNode;

	thisOne = *head;
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (index == 0)
	{
		newNode->next = thisOne;
		*head = newNode;
		return (*head);
	}
	while (index > 1)
	{
		thisOne = thisOne->next;
		index--;
		if (!thisOne)
		{
			free(newNode);
			return (NULL);
		}
	}
	newNode->next = thisOne->next;
	thisOne->next = newNode;
	return (newNode);
}
