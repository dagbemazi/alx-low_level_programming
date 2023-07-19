#include <stdio.h>
#include "main.h"

/**
  * print_times_table - print times table
  * of given number up to 15.
  * @n: number to print times table of
  * Return: void
  */

void print_times_table(int n)
{
	int loop, multiple, multiplier;

	multiplier = n;

	if (multiplier <= 15 && multiplier > 0)
	{

		for (loop = 0; loop <= multiplier; loop++)
		{
			for (multiple = 0; multiple <= multiplier; multiple++)
			{
				int product;

				product = loop * multiple;

				if (multiple == 0)
				{
					printf("%d", product);
				}
				else
				{
					printf("%3d", product);
				}

				if (multiple != multiplier)
				{
					printf(", ");
				}
			}

			printf("\n");
		}
	}
}
