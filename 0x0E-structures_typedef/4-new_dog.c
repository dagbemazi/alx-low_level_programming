#include <stdlib.h>
#include "dog.h"

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
