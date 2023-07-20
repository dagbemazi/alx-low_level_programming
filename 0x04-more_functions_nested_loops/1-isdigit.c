#include <ctype.h>

/**
  * _isdigit - check if number is a digit
  * @c: number to check against
  * Return: 1 if true, 0 if false
  */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
