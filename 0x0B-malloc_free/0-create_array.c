#include <stdlib.h>

/**
  * create_array - allocates an array of chars,
  * initialize array with specific char.
  * @size: size of array
  * @c: char to initialize with.
  * Return: Null if memory not allocated,
  *         else pointer to array.
  */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;
	unsigned int memsize = sizeof(c) * size;

	if (size == 0)
	{
		return (0);
	}
	else
	{
		ptr = malloc(memsize);

		if (ptr == NULL)
		{
			return (0);
		}
		else
		{
			for (i = 0; i < memsize; i++)
			{
				ptr[i] = c;
			}
		}
	}

	return (ptr);
}
