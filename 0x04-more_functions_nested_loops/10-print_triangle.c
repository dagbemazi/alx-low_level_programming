#include "main.h"

/**
  * print_triangle - prints a triangle followed by newline
  *
  * @size: size of triangle
  */

void print_triangle(int size)
{
	int i, c, space;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (space = i; space < size; space++)
		{
			_putchar(' ');
		}

		for (c = 1; c <= i; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
