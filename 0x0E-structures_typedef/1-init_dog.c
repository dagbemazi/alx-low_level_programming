#include "dog.h"

/**
  * init_dog - initialize type for struct dog
  * @d: pointer to struct
  * @name: pointer to dog name
  * @age: age of dog
  * @owner: pointer to owner name
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
