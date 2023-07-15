#include <stdio.h>

/**
  * main - print all base 10 values
  * Return: always 0
  */


int main(void)
{
	int base;

	for (base = 48; base <= 57; base++)
	{
		putchar(base);

		if (base != 57)
		{
			putchar(44);
			putchar(32);
		}
	}

	putchar(10);

	return (0);
}
