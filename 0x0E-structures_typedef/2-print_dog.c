#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: The struct dog variable
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return (void);

	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n" d.name);

	if (d->age == NULL)
		printf("Age: (nil)\n");
	else
		printf("Age: %f\n" d.age);

	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %d\n" d.owner);
}
