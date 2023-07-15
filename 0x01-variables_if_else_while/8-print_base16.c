#include <stdio.h>

/**
  * main - print uppercase and lowercase
  * Return: always 0
  */

int main(void)
{
	int hexDigits, hexAlpha;

	for (hexDigits = 48; hexDigits <= 57; hexDigits++)
	{
		putchar(hexDigits);
	}

	hexAlpha = 97;

	while (hexAlpha <= 102)
	{
		putchar(hexAlpha);
		hexAlpha++;
	}

	putchar(10);

	return (0);
}
