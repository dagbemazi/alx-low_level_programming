#include <stdio.h>

/**
  * main - entry point. print the file name.
  * Return: Always 0
  */

int main(void)
{
	char *filename;

	filename = __FILE__;

	printf("%s\n", filename);

	return (0);
}
