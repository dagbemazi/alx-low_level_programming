#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
  * read_textfile - Read a text and print to POSIX stdout
  * @filename: name of file
  * @letters: number of letters to read and print
  * Return: Number of letters read and printed, 0 if write fails
  *         or filename is null or file can't be accessed.
  */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes_read, bytes_written;
	char *buf;

	fd = open(filename, O_RDONLY);
	buf = malloc(letters);

	if (fd == -1)
		return (0);

	if (buf == NULL)
	{
		close(fd);
		return (0);
	}


	bytes_read = read(fd, buf, letters);

	if (bytes_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buf, bytes_read);

	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);
	return (bytes_written);
}
