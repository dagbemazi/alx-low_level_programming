#include <stdlib.h>

/**
  * _strdup - return a pointer to newly allocated memory
  *            pointing to a copy of string given in params.
  * @str: given string.
  * Return: Null if str = NULL or if insufficient memory allocated.
  * else a pointer to duplicate string.
  */

char *_strdup(char *str)
{
	char *ptr;
	int i, memsize = sizeof(str);

	ptr = malloc(memsize);

	if (ptr == NULL)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < memsize; i++)
		{
			ptr[i] = str[i];
		}
	}

	return (ptr);
}
