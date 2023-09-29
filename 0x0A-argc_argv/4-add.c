#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
  * main - entry point.
  * print the sum of infinite integer args.
  * @argc: argument counter
  * @argv: pointer to argument variables
  * Return: 0 always on success.
  */

int main(int argc, char *argv[])
{
	int i, sum;
	char *endptr;

	sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			long num = strtol(argv[i], &endptr, 10);

			/* Check if strtol encountered errors */

			if (*endptr != '\0' || num > INT_MAX || num < INT_MIN)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("%d\n", 0);
	}

	return (0);
}
