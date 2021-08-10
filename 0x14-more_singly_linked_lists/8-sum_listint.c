#include "lists.h"

/**
* sum_listint - sum of nodes
* @head: Head, most certainly not the tail
* Return: sum
**/

int sum_listint(listint_t *head)
{
	int sumOfint;

	sumOfint = 0;
	if (head != NULL)
	{
		while (head != NULL)
		{
			sumOfint += (*head).n;
			head = (*head).next;
		}
	}
	return (sumOfint);
}
