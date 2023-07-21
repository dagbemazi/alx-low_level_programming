#include "main.h"
#include <stdio.h>

/**
  * more_numbers - print 0 - 14 to 10 times
  * Return: void
  */

void more_numbers(void)
{
	int range, i;

	for (range = 0; range < 10; range++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar((i / 10) + '0');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
