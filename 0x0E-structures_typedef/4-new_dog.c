#include <stdlib.h>
#include "dog.h"

/**
  * _strlen - find the length of the string
  * @text: string to find length for
  * Return: length of string
  */

int _strlen(char *text)
{
	int length;

	length = 0;

	while (text[length] != '\0')
	{
		length++;
	}

	return (length);
}

/**
  * new_dog - function pointer that creates new dog
  * @name: dog name
  * @age: age of dog
  * @owner: name of dog owner
  * Return: If code fails, NULL;
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	int namelen, ownerlen;

	char *name_cpy, *owner_cpy;

	namelen = _strlen(name);
	ownerlen = _strlen(owner);

	name_cpy = malloc(namelen + 1 * sizeof *name_cpy);
	owner_cpy = malloc(ownerlen + 1 * sizeof *owner_cpy);

	name_cpy = name;
	owner_cpy = owner;

	if (name_cpy == NULL || owner_cpy == NULL)
	{
		return (0);
	}
}
