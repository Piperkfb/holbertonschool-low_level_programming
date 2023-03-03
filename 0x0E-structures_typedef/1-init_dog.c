#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes variable of struct dog
 * @d: Name of new struct
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
