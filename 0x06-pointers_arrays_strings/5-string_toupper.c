#include "main.h"

/**
  * string_toupper - convert lowercases to uppercase
  * @t: input string
  * Return: pointer to converted cases
  */

char *string_toupper(char *t)
{
	int i;

	i = 0;

	while (*(t + i))
	{
		if (*(t + i) >= 'a' && *(t + i) <= 'z')
		{
			*(t + i) -= 32;
		}

		i++;
	}

	return (t);
}
