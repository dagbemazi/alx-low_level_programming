#include <stdio.h>
#include <stdarg.h>

/**
  * print_strings - print strings passed followed by newline.
  * @separator: printed between strings.
  * @n: number of strings pased
  * Return: nothing
  */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list words;
	unsigned int i;
	char *string;

	va_start(words, n);

	for (i = 1; i <= n; i++)
	{
		string = va_arg(words, char *);

		if (string == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", string);
		}

		if (separator != NULL && i < n)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(words);
}
