#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  * print_dog -prints the struct dog
  * @d: pointer to struct dog
  * Return: nothing
  */

void print_dog(struct dog *d)
{
	char *name = (*d).name;
	char *owner = (*d).owner;
	float age = (*d).age;

	if (d == NULL)
	{
		return;
	}
	else
	{

		if (name == NULL)
			name = "(nil)";

		if (owner == NULL)
			owner = "(nil)";

		printf("Name: %s\nAge: %f\nOwner: %s\n", name, age, owner);

	}
}
