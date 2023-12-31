#include "main.h"

/**
  * print_number - prints long integers with putchar only
  * @n: integer to print
  * Return void
  */

void print_number(int n)
{
	if (n != 0)
	{
		print_number(n / 10);
		_putchar('0' + (n % 10));
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	else
	{
		_putchar(48);
	}
}
