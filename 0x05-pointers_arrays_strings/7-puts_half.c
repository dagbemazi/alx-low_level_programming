#include "main.h"

/**
  * str_len - find length of string
  * @s: input string
  * Return: length of string
  */

int str_len(char *s)
{
	int length;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}

/**
  * puts_half - print half of a string
  * @str: input string
  */

void puts_half(char *str)
{
	int len, n, i;

	n = 0;

	len = str_len(str);

	if (len % 2 == 0)
	{
		n = (len / 2);
	}
	else
	{
		n = (len - 1) / 2;
	}

	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
