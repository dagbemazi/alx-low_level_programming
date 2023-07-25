#include "main.h"

/**
  * puts2 - prints every other character of string
  * @s: input string
  */

void puts2(char *s)
{
	int start;

	start = 0;

	while (s[start] != '\0')
	{
		if (start % 2 == 0)
		{
			_putchar(s[start]);
		}

		start++;
	}
	_putchar('\n');
}
