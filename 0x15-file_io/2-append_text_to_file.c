#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
  * append_text_to_file - append text to end of file
  * @filename: name of file
  * @text_content: NULL terminated string to add to file
  * Return: 1 on success -1 on failure
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc, write_status, bufsize = 0;

	if (filename == NULL)
		return (-1);

	file_desc = open(filename, O_WRONLY | O_APPEND);

	if (file_desc == -1)
		return (-1);

	while (text_content[bufsize] != '\0')
	{
		bufsize++;
	}

	write_status = write(file_desc, text_content, bufsize);

	if (write_status == -1)
		return (-1);

	return (1);
}
