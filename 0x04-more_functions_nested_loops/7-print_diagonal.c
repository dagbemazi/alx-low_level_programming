#include "main.h"

/**
  * print_diagonal - prints empty space followed by \
  *
  * @n: number of spaces to print
  * Return: void
  */

void print_diagonal(int n)
{
	int i, c, space;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i < n; i++)
	{
		for (space = 1; space <= n; space++)
		{
			_putchar(' ');
		}

		for (c = 1; c < i; c++)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}


}
