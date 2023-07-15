#include <stdio.h>
#include <stdlib.h>

/**
  * main - print all alphabets
  * Return: always 0
  */


int main(void)
{
	int letter;

	for (letter = 122; letter >= 97; letter--)
	{
		putchar(letter);
	}
	putchar(10);

	return (0);
}
