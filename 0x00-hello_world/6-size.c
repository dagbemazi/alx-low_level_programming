#include <stdio.h>

/**
  * main - Entry point
  * Print size of various data types
  *
  * Return: Always 0(success)
  */


int main(void)
{
	int charSize = sizeof(char);
	int intSize = sizeof(int);
	int longIntSize = sizeof(long int);
	int longLongIntSize = sizeof(long long int);
	int floatSize = sizeof(float);

	printf("Size of a char: %d byte(s)\n", charSize);
	printf("Size of a int: %d byte(s)\n", intSize);
	printf("Size of a long int: %d byte(s)\n", longIntSize);
	printf("Size of a long long int: %d byte(s)\n", longLongIntSize);
	printf("Size of a float: %d byte(s)\n", floatSize);

	return (0);
}
