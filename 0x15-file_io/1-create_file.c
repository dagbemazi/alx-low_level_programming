#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int _strlen(char *s);

/**
  * create_file - creates a file
  * @filename: name of file to create
  * @text_content: NULL terminated string to write to file
  *
  * Return: 1 on success else -1.
  */

int create_file(const char *filename, char *text_content)
{
	int file_descriptor, mode, buf_size;

	mode = O_WRONLY | O_CREAT | O_TRUNC;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, mode, 0600);

	if (file_descriptor == -1)
	{
		return (-1);
	}
	else
	{
		if (text_content == NULL)
			text_content = "";

		buf_size = _strlen(text_content);

		write(file_descriptor, text_content, buf_size);
	}

	return (0);
}


/**
  * _strlen - find length of string
  * @s: pointer to input string
  * Return: length of string
  */

int _strlen(char *s)
{
	int length;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
