#include <stdio.h>

/**
  * main - print uppercase and lowercase
  * Return: always 0
  */

int main(void)
{
	int lower;
	char upper;

	for (lower = 97; lower <= 122; lower++)
	{
		putchar(lower);
	}

	upper = 65;

	while (upper <= 90)
	{
		putchar(upper);
		upper++;
	}

	putchar(10);

	return (0);
}
