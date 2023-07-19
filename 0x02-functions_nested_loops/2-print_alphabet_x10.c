#include "main.h"

/**
  * print_alphabet_x10 - print lowercase alphabets 10 times
  */

void print_alphabet_x10(void)
{
	int times, total;

	total = 10;

	for (times = 0; times < total; times++)
	{
		int letters;

		for (letters = 'a'; letters <= 'z'; letters++)
		{
			putchar(letters);
		}
		putchar(10);
	}
}
