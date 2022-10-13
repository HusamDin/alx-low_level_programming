#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: the dog name
 * @age: the doge age
 * @owner: the dog owner
 *
 * Return: a pointer to a dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int nameLen, ownerLen, i;

	nameLen = strlen(name);
	ownerLen = strlen(owner);

	if (name == NULL || owner == NULL)
		return (NULL);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc((sizeof(name) * nameLen) + 1);
	if (d->name == NULL)
	{
		free (d);
		return (NULL);
	}

	for (i = 0; i < nameLen + 1; i++)
		d->name[i] = name[i];

	d->owner = malloc((sizeof(owner) * ownerLen) + 1);
	if (d->owner == NULL)
	{
		free (d->name);
		free (d);
		return (NULL);
	}

	for (i = 0; i < ownerLen + 1; i++)
		d->owner[i] = owner[i];
	d->age = age;

	return (d);
}
