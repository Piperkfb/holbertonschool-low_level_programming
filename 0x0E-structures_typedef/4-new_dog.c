#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Creates a new dog_t
 * @name: Name of new dog
 * @age: Age of new dog
 * @owner: Owner of new dog
 * Return: Memory of new dog
 */

int _strlen(char *s);
char *_strcpy(char *s1, char *s2);

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *Watson;

	Watson = malloc(sizeof(dog_t));
	if (Watson == NULL)
	{
		free(Watson);
		return(NULL);
	}

	Watson->name = malloc(_strlen(name) + 1);
	if (Watson->name == NULL)
	{
		free(Watson->name);
		return(NULL);
	}
	Watson->name = _strcpy(Watson->name, name);

	Watson->age = age;

	Watson->owner = malloc(_strlen(owner) + 1);
	if (Watson->owner == NULL)
	{
		free(Watson->owner);
		return(NULL);
	}
	Watson->owner = _strcpy(Watson->owner, owner);
	return (Watson);
}

int _strlen(char *s)
{
	int sc = 0;
	
	for (sc = 0; s[sc]; sc++)
		;
	return(sc);
}

char *_strcpy(char *s1, char *s2)
{
	int sc = 0;

	for (sc = 0; s1[sc]; sc++)
	{	s2[sc] = s1[sc];
	}
	s2[sc] = '\0';
	return(s1);
}
