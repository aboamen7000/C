#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free struct ptr
 *
 * @d: ptr to free
 *
 * Return: Nothing
 */

void free_dog(dog_t *d)
{
	if (!d)
	{ }
	else
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

