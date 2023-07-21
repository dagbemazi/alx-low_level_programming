#include <stdio.h>

/**
  * fizzBuzz -  If number is multiples of 3 and 5 print FizzBuzz
  * if its a multiple of 3 print Fizz
  * if that of 5, print Buzz
  * else print the number
  *
  * Return: void
  */

void fizzBuzz(void)
{
	int start;

	for (start = 1; start <= 100; start++)
	{
		if ((start % 3 == 0) && (start % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if ((start % 3 == 0) && (start % 5 != 0))
		{
			printf("Fizz");
		}
		else if ((start % 3 != 0) && (start % 5 == 0))
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", start);
		}

		if (start != 100)
		{
			printf(" ");
		}

	}

	printf("\n");
}

/**
  * main - call fizzBuzz
  * Return: 0 always for success
  */

int main(void)
{
	fizzBuzz();

	return (0);
}
