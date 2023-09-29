#include <stdio.h>
#include <stdlib.h>

/**
  * main - entry point.
  * print the product of two numbers.
  * @argc: argument counter
  * @argv: pointer to argument variables
  * Return: 0 always on success.
  */

int main(int argc, char *argv[])
{
	int product;

	if (argc > 2)
	{
		product = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", product);

		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
