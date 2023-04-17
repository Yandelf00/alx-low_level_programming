#include "dog.h"
#include <stdio.h>

/**
 *init_dog - a function that initialize the variables of our dog structure
 *@d: the new object
 *@name: dog's name
 *@age: dog's age
 *@owner: dog's owner
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

