#include <stdio.h>

/**
  * fizzBuzz - finds sum of multiples of 3 and 5
  * @n: number to find sum of
  *
  * Return: void
  */

void fizzBuzz(int n)
{
	int start, sum;

	sum = 0;

	for (start = 0; start < n; start++)
	{
		if ((start % 3 == 0) || (start % 5 == 0))
			sum += start;
	}

	printf("%d\n", sum);
}

/**
  * main - call fizzBuzz
  * Return: 0 always for success
  */

int main(void)
{
	fizzBuzz(1024);

	return (0);
}
