#include <ctype.h>

/**
  * _isalpha - check if value is lower
  * @c: character to check against
  * Return: 1 if True, 0 if false
  */

int _isalpha(int c)
{
	if isalpha(c)
		return (1);
	return (0);
}
