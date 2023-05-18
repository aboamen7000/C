#include "dog.h"
#include <stdlib.h>
/**
 * len - returns length of string
 * @s: string
 * Return: length of string
 */
int len(char *s)
{
	int index;

	for (index = 0; s[index]; index++)
		;

	return (index);
}

/**
 * cpy - copies string
 * @to: destination to
 * @source: source
 *
 * Return: pointer to destination
 */
char *cpy(char *to, char *source)
{
	int i;

	for (i = 0; source[i]; i++)
		to[i] = source[i];
	to[i] = '\0';

	return (to);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (!new)
		return (NULL);

	new->name = malloc(sizeof(char) * (len(name) + 1));
	if (!new->name)
	{
		free(new);
		return (NULL);
	}
	new->name = cpy(new->name, name);

	new->owner = malloc(sizeof(char) * (len(owner) + 1));
	if (!new->owner)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	new->owner = cpy(new->owner, owner);

	new->age = age;

	return (new);
}
