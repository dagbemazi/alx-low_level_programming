#include <stdlib.h>

/**
  * malloc_checked - returns pointer to allocated mem
  * @b: size of memory to be allocated
  * Return: pointer to newly allocated memory.
  */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL || (unsigned int)((size_t)ptr) != b)
	{
		exit(98);
	}
	return (ptr);
}
