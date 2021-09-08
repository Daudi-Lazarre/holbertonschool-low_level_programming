#include "lists.h"

/**
 * get_dnodeint_at_index - finds a particular node
 * @head: head
 * @index: Choose which node
 *
 * Return: pointer to node index, Null if failed
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int increment;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	for (increment = 0; increment < index; increment++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
