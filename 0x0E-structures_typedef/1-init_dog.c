#include "dog.h"

/**
 * init_dog - function that initializes variable of type struct dog
 *
 * @d: pointer to struct dog
 *
 * @name: pointer to name of dog
 *
 * @age: age of dog
 *
 * @owner: pointer to dog owner
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
