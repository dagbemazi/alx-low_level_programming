#include "main.h"

/**
  * str_len - find the length of the string
  * @text: string to find length for
  * Return: length of string
  */

int str_len(char *text)
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
  * rev_string - print string in reverse followed by newline
  * @s: string to reverse
  * Return: void
  */

void rev_string(char *s)
{
	int length, a;

	length = str_len(s);

	char tmp; /* store string */

	tmp = *s;

	for (a = length - 1; a >= 0; a--)
	{
		*s = tmp[a];
	}
}
