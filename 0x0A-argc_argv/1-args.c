#include <stdio.h>

/**
  * main - entry point.
  * print the number of args passed to file
  * @argc: argument counter
  * @argv: pointer to argument variables
  * Return: 0 always on success.
  */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));

	return (0);
}
