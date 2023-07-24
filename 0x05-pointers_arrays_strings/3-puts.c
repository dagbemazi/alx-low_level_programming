#include "main.h"

/**
  * _puts - print string followed by newline to stdout
  * @str: string to print
  * Return: void
  */

void _puts(char *str)
{
	int i, length;

	length = _strlen(str);

	for (i = 0; i <= length; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
