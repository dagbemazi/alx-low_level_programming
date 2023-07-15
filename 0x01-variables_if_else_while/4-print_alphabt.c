#include <stdio.h>
#include <stdlib.h>

/**
  * main - print all alphabets
  * Return: always 0
  */


int main(void)
{
	int letter;

	for (letter = 97; letter <= 122; letter++)
	{
		if (letter != 113 && letter != 101)
		{
			putchar(letter);
		}
	}
	putchar(10);

	return (0);
}
