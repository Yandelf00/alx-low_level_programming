#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - our function that frees our dog object
 * @d: our dog object
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
