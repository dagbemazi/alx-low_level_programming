#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>

/**
  * copy_file - copies a file to another
  * @file1: name of file to copy from
  * @file2: name of file to copy to
  * Return: 0 on succes
  */

size_t copy_file(const char *file1, const char *file2)
{
	int file_d1, file_d2, bytes;
	char buf[1024];

	file_d1 = open(file1, O_RDONLY);
	file_d2 = open(file2, O_RDWR | O_CREAT | O_TRUNC, 0664);

	if (file_d1  == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file1);
		exit(98);
	}

	if (file_d2 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", file2);
		exit(99);
	}

	while ((bytes = read(file_d1, buf, sizeof(buf))) > 0)
	{
		write(file_d2, buf, bytes);
	}

	if (close(file_d1) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_d1);
		exit(100);
	}

	if (close(file_d2) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", file_d2);
		exit(100);
	}

	return (0);
}

/**
  * main - check the code
  * @argc: length av array
  * @av: array of args
  * Return: 0 on success
  */

int main(int argc, char **av)
{

	if (argc != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}

	copy_file(av[1], av[2]);

	return (0);

}
