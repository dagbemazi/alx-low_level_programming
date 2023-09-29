#include <stdio.h>

/**
  * main - entry point.
  * print all arguments received.
  * @argc: argument counter
  * @argv: pointer to argument variables
  * Return: 0 always on success.
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
