#include <stdlib.h>

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
  * _strdup - return a pointer to newly allocated memory
  *            pointing to a copy of string given in params.
  * @str: given string.
  * Return: Null if str = NULL or if insufficient memory allocated.
  * else a pointer to duplicate string.
  */

char *_strdup(char *str)
{
	char *ptr;
	int i, memsize;

	if (str == NULL)
	{
		return (0);
	}

	memsize = _strlen(str) + 1;

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
