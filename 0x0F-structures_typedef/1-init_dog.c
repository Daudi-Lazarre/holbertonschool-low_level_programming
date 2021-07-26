#include "dog.h"

/**
* struct dog - doggoe description
* @d: pointer to structure
* @name: doggoe name
* @age: doggoe age
* @owner: of doggoe
*
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
