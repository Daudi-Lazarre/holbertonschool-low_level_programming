#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_dog - Print dog structure; all of the info.
I am* @d: pointer Dog pointer (lol not the breed, silly rabbit)
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
		return;

	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");

	if (d->age)
		printf("Age: %f\n", d->age);
	else
		printf("Age: (nil)\n");

	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}
