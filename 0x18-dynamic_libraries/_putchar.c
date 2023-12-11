#include "main.h"
#include <unistd.h>

/**
  * _putchar - print characters
  * @c: characters
  * Return: characters
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
