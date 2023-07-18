#include "main.h"

/**
  * print_alphabet - print lowercase alphabets
  */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar(10);
}


/**
  * main - Entry point
  * Return: 0 Success
  */

int main(void)
{
	print_alphabet();
	return (0);
}
