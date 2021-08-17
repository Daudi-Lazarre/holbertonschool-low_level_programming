#include "holberton.h"

/**
* create_file - Create the file
* @filename: File's name
* @text_content: The content of the file
* Return: 1 if successful, -1 if not
*/

int create_file(const char *filename, char *text_content)
{
	ssize_t len;
	int fd;
	int write_something;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC);

		if (fd == -1)
			return (-1);
	}
	if (text_content)
	{
		for (len = 0; text_content[len];)
			;
		     len++;

		     write_something = write(fd, text_content, len);
			if (write_something == -1)
				return (-1);
	}
	close(fd);
	return (1);
}
