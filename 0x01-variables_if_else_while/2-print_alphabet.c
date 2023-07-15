#include <stdio.h>
#include <stdlib.h>

/**
  * main - print all alphabets
  * Return: always 0
  */


int main(void)
{
	char letter;

	for (letter = "a"; letter <= "z"; letter++)
	{
		putchar(letter);
	}

	return (0);
}
