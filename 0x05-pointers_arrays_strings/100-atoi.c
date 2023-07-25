#include "main.h"
#include <stdlib.h>

/**
  * _atoi - convert a string to integer.
  * @s: input string
  * Return: integer converted number
  */

int _atoi(char *s)
{
	int result, sign, finalRes;

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
