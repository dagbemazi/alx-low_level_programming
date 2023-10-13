#include <stdio.h>
#include <stdarg.h>

void print_string(char *str);
void print_sep(void);

/**
  * print_all - prints anything passed
  * @format: list of types of arguments passed
  * Return: nothing
  */

void print_all(const char * const format, ...)
{
	char ch, *str;
	int num;
	float fnum;
	const char *fmt_pos = format;

	va_list args;

	va_start(args, format);

	while ((ch = *fmt_pos) != '\0')
	{
		if (ch == 'c')
		{
			num = va_arg(args, int);
			printf("%c", num);
		}
		else if (ch == 'i')
		{
			num = va_arg(args, int);
			printf("%d", num);
		}
		else if (ch == 'f')
		{
			fnum = va_arg(args, double);
			printf("%f", fnum);
		}
		else if (ch == 's')
		{
			str = va_arg(args, char *);

			print_string(str);
		}
		fmt_pos++;
	}
	va_end(args);
	printf("\n");
}

/**
  * print_string - print a string byte
  * @str: pointer to string
  */

void print_string(char *str)
{
	if (str == NULL)
		printf("(nil)");
	
	printf("%s", str);
}

/**
  * print_sep - print sepator for texts"
  */

void print_sep(void)
{
	printf(", ");
}
