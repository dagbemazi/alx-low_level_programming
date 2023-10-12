#include <stdarg.h>
#include <stdio.h>

/**
  * print_numbers - prints numbers followed by a newline
  * @separator: string to be printed between numbers
  * @n: number of integers passed to function
  * Return: nothing
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, number;
	va_list numbers;

	va_start(numbers, n);

	for (i = 1; i <= n; i++)
	{
		number = va_arg(numbers, int);

		printf("%d", number);

		if (separator != NULL && i < n)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(numbers);
}
