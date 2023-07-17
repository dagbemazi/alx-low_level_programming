#include <stdio.h>

/**
  * main - print combination of three digit numbers
  * Return: always 0
  */


int main(void)
{
	int i, j, k, firstDigit, secondDigit, thirdDigit;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			for (k = j + 1; k <= 9; k++)
			{
				firstDigit = i + '0';
				secondDigit = j + '0';
				thirdDigit = k + '0';

				putchar(firstDigit);
				putchar(secondDigit);
				putchar(thirdDigit);

				if (i != 7 || j != 8 || k != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}

	}

	putchar(10);

	return (0);
}
