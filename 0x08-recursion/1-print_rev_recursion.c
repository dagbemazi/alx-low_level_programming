#include "main.h"
/**
  * _print_rev_recursion - recursively prints a character
  * in reverse.
  * @s: pointer to input
  * Return: Nothing.
  */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
