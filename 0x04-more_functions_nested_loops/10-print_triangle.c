#include "main.h"

/**
  * print_triangle - prints a triangle followed by newline
  *
  * @size: size of triangle
  */

void print_triangle(int size)
{
	int i, c, space;

	for (i = 1; i <= size; i++)
	{
		for (space = size - 1; space > 0; space--)
		{
			_putchar(' ');


			for (c = 1; c <= i; c++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
