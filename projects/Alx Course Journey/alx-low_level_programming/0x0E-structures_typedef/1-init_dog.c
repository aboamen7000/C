#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - init a var of type struct dog.
 * @d: pointer to struct
 * @name: param of name of the dog
 * @age: param of age of the dog
 * @owner: ptr param to owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
		if (d == NULL)
		{
			return;
		}
		d->name = name;
		d->age = age;
		d->owner = owner;
}
