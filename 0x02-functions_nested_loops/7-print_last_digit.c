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
	int last_digit, return_val;

	last_digit = k % 10;
	return_val = '0' + last_digit;
	return (return_val);
}
