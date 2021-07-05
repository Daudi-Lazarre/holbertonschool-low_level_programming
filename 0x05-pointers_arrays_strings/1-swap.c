#include "holberton.h"

/**
* swap_int - I'm gonna make a meme about pointers and put it in the chat
* @a: ayeeeee
* @b: baby
* Return: v0id
*/

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
