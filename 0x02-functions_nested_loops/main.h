#include <stdio.h>

/**
  * _putchar - prototype for putchar()
  *
  * Return: void
  */

void _putchar()
{
	char text[] = "_putchar";
	int i;

	for (i=0; text[i] != '\0'; i++)
	{
		putchar(text[i]);
	}
	putchar(10);
}
