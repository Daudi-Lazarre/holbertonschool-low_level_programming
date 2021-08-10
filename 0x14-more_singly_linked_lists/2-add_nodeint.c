#include "lists.h"

/**
 * add_nodeint - Add node
 * Return: Element address
 * @head: The head of the list
 * @n: int being added
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_node;

	add_node = malloc(sizeof(listint_t));

	if (!add_node)
		return (NULL);
	add_node->n = n;
	add_node->next = *head;
	*head = add_node;
	return (add_node);
}
