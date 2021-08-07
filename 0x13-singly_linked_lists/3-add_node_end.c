#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * _strlen - return length of character array
 * @s: pointer for string
 * Return: size of the array
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}

/**
 * add_node_end - adds a new node to that tail
 * @head: The start of the list, double pointer
 * @str: String
 * Return: the tail
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tail, *temp;

	if (str == NULL)
		return (NULL);

	tail = (list_t *)malloc(sizeof(list_t));
	if (tail == NULL)
		return (NULL);

	tail->str = strdup(str);
	tail->len = _strlen(str);

	if (*head == NULL)
		*head = tail;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = tail;
	}
	return (tail);
}
