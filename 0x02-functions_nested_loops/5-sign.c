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
		putchar('+');
		return (1);
	} else if (n == 0)
	{
		putchar("0");
		return (0);
	} else
	{
		putchar('-');
		return (-1);
	}
}
