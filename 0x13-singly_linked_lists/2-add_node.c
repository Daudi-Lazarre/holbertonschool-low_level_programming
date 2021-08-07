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
 * add_node - adds a new node to be the head of the list
 * @head: the beginning of the linked list
 * @str: string
 * Return: The new node, the new kid on the block
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newKidOnTheBlock;

	newKidOnTheBlock = (list_t *)malloc(sizeof(list_t));

	if (str == NULL && newKidOnTheBlock == NULL)
		return (NULL);

	newKidOnTheBlock->str = strdup(str);
	newKidOnTheBlock->len = _strlen(str);
	newKidOnTheBlock->next = *head;

	return (newKidOnTheBlock);
}
