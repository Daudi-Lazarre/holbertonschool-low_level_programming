#include "lists.h"

/**
 * dlistint_len - List length
 * @h: head
 *
 * Return: node num
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num =  0;

	while (num != NULL)
	{
		num++;
		num = num->next;
	}
	return (num);
}
