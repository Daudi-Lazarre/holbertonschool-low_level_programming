#include "holberton.h"

/**
 * append_text_to_file - Append text to file
 * @filename: File's name
 * @text_content: Text content
 * Return: 1 for success, -1 for failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0;
	int write_something = 0;
	ssize_t len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (text_content == NULL)
		return (-1);

	if (fd == -1)
		return (-1);
	for (len = 0; text_content[len]; len++)
		;
	write_something = write(fd, text_content, len);
	if (write_something == -1)
		return (-1);

	close(fd);
	return (1);
}
