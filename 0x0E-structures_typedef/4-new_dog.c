#include "dog.h"
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner);
int _strlen(char *s);
char *_strcpy(char *s2, char *s1);

/**
 * new_dog - Creates a new dog_t
 * @name: Name of new dog
 * @age: Age of new dog
 * @owner: Owner of new dog
 * Return: Memory of new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *Watson;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	Watson = malloc(sizeof(dog_t));
	if (Watson == NULL)
	{
		return (NULL);
	}

	Watson->name = malloc(_strlen(name) + 1);
	if (Watson->name == NULL)
	{
		free(Watson);
		return (NULL);
	}
	Watson->name = _strcpy(Watson->name, name);

	Watson->age = age;

	Watson->owner = malloc(_strlen(owner) + 1);
	if (Watson->owner == NULL)
	{
		free(Watson->name);
		free(Watson);
		return (NULL);
	}
	Watson->owner = _strcpy(Watson->owner, owner);
	return (Watson);
}
/**
 * _strlen - captures the length of a string
 * @s: the string
 * Return: The length
 */
int _strlen(char *s)
{
	int sc = 0;

	for (sc = 0; s[sc]; sc++)
		;
	return (sc);
}
/**
 * _strcpy - Copies a string into another area
 * @s1: The copy name
 * @s2: location of copy
 * Return: Pointer to copied string
 */
char *_strcpy(char *s2, char *s1)
{
	int sc = 0;

	for (sc = 0; s1[sc]; sc++)
	{	s2[sc] = s1[sc];
	}
	s2[sc] = '\0';
	return (s2);
}
