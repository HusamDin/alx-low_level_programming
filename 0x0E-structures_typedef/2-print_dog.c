#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog
 * @d: the struct to print
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name != NULL && d->owner != NULL)
			printf("Name: %s\nAge: %f\nOwner: %s\n", d->name,
			       d->age, d->owner);
		if (d->name != NULL && d->owner == NULL)
			printf("Name: %s\nAge: %f\nOwner: (nil)\n", d->name,
			       d->age);
		if (d->name == NULL && d->owner != NULL)
			printf("Name: (nil)\nAge: %f\nOwner: %s\n", d->age,
				d->owner);
		if (d->name == NULL && d->owner == NULL)
			printf("Name: (nil)\nAge: %f\nOwner: (nil)\n", d->age);
	}
}
