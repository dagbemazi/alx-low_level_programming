#include <stdio.h>

/**
  * print_to_98 - Print numbers up to 98
  * @n: number to print from
  */

void print_to_98(int n)
{

	if (n == 98)
	{
		printf("%d\n", n);
	} else
	{

		if (n < 98)
		{
			for (n = 0; n <= 98; n++)
			{
				printf("%d, ", n);
			}
		} else if (n > 98)
		{
			for (n = n; n >= 98; n--)
			{
				printf("%d, ", n);
			}
		}
	}
	printf("\n");
}

/**
  * main - entry point
  * Return: always (0) success
  */
int main(void)
{
	print_to_98(100);
	print_to_98(0);
	print_to_98(98);
	return (0);
}
