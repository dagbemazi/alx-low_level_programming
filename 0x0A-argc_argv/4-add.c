#include <stdio.h>

#include "main.h"
#include <stdlib.h>

/**
  * _atoi - convert a string to integer.
  * @s: input string
  * Return: integer converted number
  */

int _atoi(char *s)
{
	unsigned int result, sign, finalRes;

	sign = 1;
	result = 0;
	do {
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			result = (result * 10) + (*s - '0');
		}
		else if (result > 0)
			break;
	} while (*s++);
	finalRes = result * sign;

	return (finalRes);
}


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

	sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (!(_atoi(argv[i])))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += _atoi(argv[i]);
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
