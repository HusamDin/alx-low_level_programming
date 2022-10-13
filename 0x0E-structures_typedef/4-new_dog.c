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
	int nameLen, ownerLen;

	nameLen = strlen(name);
	ownerLen = strlen(owner);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(name) * nameLen);
	if (d->name == NULL)
		return (NULL);

	d->owner = malloc(sizeof(owner) * ownerLen);
	if (d->owner == NULL)
		return (NULL);
	
	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
