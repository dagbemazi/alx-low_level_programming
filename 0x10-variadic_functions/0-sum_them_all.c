#include <stdarg.h>

/**
  * sum_them_all - computes sum of integers
  * @n: count of arguemnts
  * Return: 0 if n == 0 else sum
  */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		unsigned int result, i;
		va_list numbers;

		result = 0;

		va_start(numbers, n);

		for (i = 1; i <= n; i++)
		{
			result += va_arg(numbers, int);
		}
		va_end(numbers);

		return (result);

	}
}
