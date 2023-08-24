#include <stdio.h>

/**
  * fib - calculates the fibonnaci sequence
  * @n: input to calculate
  * Return: fibonnaci value
  */

int fib(int  n)
{
	int seq[n];
	int i;

	seq[0] = 1;
	seq[1] = 2;

	for (i = 0; i < n; i++)
	{
		seq[i] = seq[i - 1] + seq[i - 2];
	}

	return (seq[n]);
}
/**
  * main - call fib function and print sequence
  *
  * Return: 0
  */

int main(void)
{
	int i;

	printf("%d, ", 1);

	for (i = 1; i <= 51; i++)
	{
		int res;

		res = fib(i);
		if (res != 1 && res != 0)
		{
			printf("%d", res);

			if (i != 51)
			{
				printf(", ");
			}
		}
	}

	printf("\n");
	return (0);
}
