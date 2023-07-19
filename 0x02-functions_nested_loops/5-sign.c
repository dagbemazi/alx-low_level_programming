#include <stdio.h>
/**
  * print_sign - check sign of number
  * @n: character to check against
  * Return: 1 if True, 0 if false
  */

int print_sign(int n)
{
	if (n > 0)
	{
		printf("+, ");
		return (1);
	} else if (n == 0)
	{
		_putchar('48');
		return (0);
	}
	else
	{
		_putchar('45');
		return (-1);
	}

	_putchar('\n');
}
