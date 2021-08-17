#include "holberton.h"

/**
* read_textfile - Read the text file and show it
* @filename: The name of the file
* @letters: The printed letters
* Return: # of printed letters
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_me_this;
	ssize_t write_me_this;
	int fd;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	read_me_this = read(fd, buffer, letters);

		if (read_me_this == -1)
		{
			free(buffer);
			return (0);
		}
	write_me_this = write(STDOUT_FILENO, buffer, read_me_this);

	if (write_me_this == -1)
		return (0);

	close(fd);
	free(buffer);
	return (write_me_this);
}
