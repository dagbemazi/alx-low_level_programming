#include "main.h"

/**
  * _puts - print string followed by newline to stdout
  * @str: string to print
  * Return: void
  */

void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);

		i++;
	}
	_putchar('\n');
}
