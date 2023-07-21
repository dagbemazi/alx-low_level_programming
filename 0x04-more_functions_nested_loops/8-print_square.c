#include "main.h"
/**
  * print_square - prints square of a number with #
  * @size: size of square
  * Return: void
  */

void print_square(int size)
{
	int i, n;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (n = 0; n < size; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
