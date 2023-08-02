#include "main.h"
/**
  * _print_rev_recursion - recursively prints a character
  * in reverse.
  * @s: pointer to input
  * Return: Nothing.
  */

void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
	}
	else
	{
		i++;
		_print_rev_recursion(&s[i]);
		_putchar(s[i]);
	}
}
