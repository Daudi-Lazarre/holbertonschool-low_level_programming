#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - WhO lEt ThE DoGs OuT?!
 * @d: pointer to dog
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
