#include "main.h"

/**
  * main - print _putchar
  * Return: 0 Always
  *
  */

int main(void)
{
	char text[] = "_putchar\n";
	int i;

	for (i = 0; text[i] != '\0'; i++)
	{
		_putchar(text[i]);
	}

	return (0);
}
