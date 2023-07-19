#ifndef FUNCTION_PROTOS_H
#define FUNCTION_PROTOS_H

#include <stdio.h>

/**
  * _putchar - prototype for char
  * @c: character to be printed
  * _putchar - requires char int value
  * print_alphabet - proto
  * Return: void
  * print_to_98 - print numbers to 98
  * @n - number to print from
  */

int print_putchar(void);
int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
void print_to_98(int n);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_times_table(int n);
#endif
