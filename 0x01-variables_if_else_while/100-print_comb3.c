#include <stdio.h>

/**
  * main - print combination of two digit numbers
  * Return: always 0
  */


int main(void)
{
	int i, j, firstDigit, secondDigit;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			firstDigit = i + '0';
			secondDigit = j + '0';

			putchar(firstDigit);
			putchar(secondDigit);


			if (i != 8 || j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}

	}

	putchar(10);

	return (0);
}
