#include <stdlib.h>
/**
 * malloc_checked - Allocate memory using malloc
 * @b: Memory amount
 * Return: Void pointer
 */
void *malloc_checked(unsigned int b)
{
	/* What if pointer  equal to null? */
	/* Nvm wouldn't work */
	void *tired;

	tired = malloc(b);
	if (tired != NULL)
	{
		return (tired);
	}
	exit(98);
}
