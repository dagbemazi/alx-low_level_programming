#include <stdio.h>

/**
  * times_table - print 9 times table
  *
  * Return: void
  */

void times_table(void)
{
	int loop, multiple, multiplier;

	multiplier = 9;

	for (loop = 0; loop <= multiplier; loop++)
	{
		for (multiple = 0; multiple <= 9; multiple++)
		{
			int product;

			product = loop * multiple;

			if (multiple != multiplier)
			{
				printf("%2d, ", product);
			}
			else
			{
				printf("%2d", product);
			}
		}
		printf("\n");
	}
}
