#include <stdlib.h>
#include "dog.h"

/**
  * _strlen - find the length of the string
  * @text: string to find length for
  * Return: length of string
  

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

*/

/**
  * new_dog - function pointer that creates new dog
  * @name: dog name
  * @age: age of dog
  * @owner: name of dog owner
  * Return: If code fails, NULL;
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(struct dog));

	if (dog == NULL)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
