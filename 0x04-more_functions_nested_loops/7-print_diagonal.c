#include "main.h"

/**
  * print_diagonal - prints empty space followed by \
  * @n: number of spaces to print
  * Return: void
  */

void print_diagonal(int n)
{
	int i, space;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			for (space = 0; space <= n; space++)
			{
				_putchar(' ');
			}
			_putchar(92);
		}
	}

}
