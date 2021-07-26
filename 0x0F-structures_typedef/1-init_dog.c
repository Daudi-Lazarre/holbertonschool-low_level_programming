#include "dog.h"
#include <stdlib.h>

/**
* struct dog - doggoe description
* @name: doggoe name
* @age: doggoe age
* @owner: of doggoe
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
		return;
}
