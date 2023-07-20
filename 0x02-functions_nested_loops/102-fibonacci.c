#include <stdio.h>

/**
  * fib - calculates the fibonnaci sequence
  * @n: input to calculate
  * Return: fibonnaci value
  */

unsigned long fib(unsigned int  n)
{
	if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (fib(n - 1) + fib(n - 2));
	}
}

/**
  * main - call fib function and print sequence
  *
  * Return: 0
  */

int main(void)
{
	unsigned int i;

	printf("%d, ", 1);

	for (i = 1; i <= 51; i++)
	{
		unsigned long res;

		res = fib(i);
		if (res != 1 && res != 0)
		{
			printf("%lu", res);

			if (i != 51)
			{
				printf(", ");
			}
		}
	}

	printf("\n");
	return (0);
}
