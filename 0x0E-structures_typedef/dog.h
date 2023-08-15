#ifndef MAIN_H
#define MAIN_H

/**
  * struct dog - a struct for dog features
  * @name: name of dog
  * @age: dog age
  * @owner: owner of dog
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

typedef struct dog dog_t;
#endif
