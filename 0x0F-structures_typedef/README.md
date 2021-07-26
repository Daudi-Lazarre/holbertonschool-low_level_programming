This project is on structures and typedef.

Quiz:
// Explain to me numbers 2 and 3?

Task 0
// No problems.

Task 1
// I tried using a ternary operator and that didn't work. :/
// I wanted to be cool and flex my muscles just like Kay says...

Task 2
// I tried using a ternary operator again and it didn't go well.
// Went back to basics and kept it neat.

Here's what I have now:
#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_dog - Print dog structure; all of the info.
* @d: pointer Dog pointer (lol not the breed, silly rabbit)
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

