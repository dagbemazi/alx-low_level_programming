#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

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
	int file_descriptor, mode, buf_size, bytes_written;

	buf_size = _strlen(text_content);

	mode = O_CREAT | O_RDWR | O_TRUNC;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, mode, 0600);

	if (file_descriptor == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	bytes_written = write(file_descriptor, text_content, buf_size);

	if (bytes_written == -1)
		return (-1);

	close(file_descriptor);

	return (1);
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
