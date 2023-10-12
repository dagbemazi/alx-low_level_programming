#include <stdio.h>
#include <stdarg.h>

/**
  * print_all - prints anything passed
  * @format: list of types of arguments passed
  * Return: nothing
  */

void print_all(const char * const format, ...)
{
	printf("%s", format);

}
