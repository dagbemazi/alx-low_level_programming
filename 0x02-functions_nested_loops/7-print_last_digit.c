#include "main.h"

/**
  * print_last_digit - returns the last digit of a number
  *
  * @k: number to pick last digit from
  *
  * Return: last digit
  */

int print_last_digit(int k)
{
	int last_digit;

	last_digit = k % 10;
	
	if (k < 0)
		last_digit = -last_digit;
	_putchar(last_digit + '0');
	return (last_digit);
}
