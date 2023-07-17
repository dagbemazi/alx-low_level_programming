#include <stdio.h>

/**
  * main - print combination of two digit numbers
  * Return: always 0
  */


int main(void)
{
	/* Initialize variables */
	int i, j, firstDigit, secondDigit, thirdDigit, lastDigit;

	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			firstDigit = i / 10;
			secondDigit = i % 10;

			thirdDigit = j / 10;
			lastDigit = j  % 10;

			/* Print digits to stdout */

			putchar(firstDigit + '0');
			putchar(secondDigit + '0');
			putchar(' ');
			putchar(thirdDigit + '0');
			putchar(lastDigit + '0');

			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}
			}
		}

	putchar(10); /* New line character */

	return (0);
}
