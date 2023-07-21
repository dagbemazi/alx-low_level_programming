#include "main.h"

/**
  * print_diagonal - prints empty space followed by \
  *
  * @n: number of spaces to print
  * Return: void
  */

void print_diagonal(int n)
{
	int i, space;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (space = 0; space < n; space++)
		{
			if (i == space)
			{
				_putchar('\\');
			}
			else if (space < i)
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
