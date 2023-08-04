#include <ctype.h>
/**
  * _isupper - implementation of isupper
  * in stdlib.h
  * @c: value to check for
  * Return: 1 if true 0 for false
  */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
