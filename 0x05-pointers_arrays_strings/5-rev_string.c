#include "main.h"

/**
  * rev_string - reverse string
  * @s: input
  */


void rev_string(char *s)
{

	int length, i;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length / 2; i++)
	{
		char temp = s[i];

		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
