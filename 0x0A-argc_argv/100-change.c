#include <stdio.h>
#include <stdlib.h>

int find_change(int coins);

/**
  * main - entry point.
  * print the minimum number of coins to make change
  * for an amount of money.
  * @argc: argument counter
  * @argv: pointer to argument variables
  * Return: 0 always on success.
  */

int main(int argc, char *argv[])
{
	int sum;

	sum = 0;

	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int cents;

		cents = atoi(argv[1]);

		if (cents < 0)
		{
			printf("%d\n", 0);
		}
		else
		{
			sum = find_change(cents);

			printf("%d\n", sum);
		}
	}

	return (0);
}

/**
  * find_change - calculate the minimum coins for change
  * @coins: input change.
  * Return: number of coins
  */

int find_change(int coins)
{
	int remainder1, remainder2, remainder3, remainder4;
	int sum = 0;

	sum += coins / 25;
	remainder1 = coins % 25;

	sum += remainder1 / 10;
	remainder2 = remainder1 % 10;

	sum += remainder2 / 5;
	remainder3 = remainder2 % 5;

	sum += remainder3 / 2;
	remainder4 = remainder3 % 2;

	sum += remainder4;

	return (sum);
}
