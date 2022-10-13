#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - with 3 members
 * @name: the dog name
 * @age: the dog age
 * @owner: the dog's owner name
 *
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
