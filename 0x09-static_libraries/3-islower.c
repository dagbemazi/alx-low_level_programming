#include <ctype.h>

/**
  * _islower - check if value is lower
  * @c: character to check against
  * Return: 1 if True, 0 if false
  */

int _islower(int c)
{
	if islower(c)
		return (1);
	return (0);
}
