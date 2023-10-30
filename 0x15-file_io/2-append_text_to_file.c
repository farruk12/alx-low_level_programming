#include "main.h"

/**
 * append_text_to_file -  function that appends text at the end of a file
 * @filename: const char pointer
 * @text_content: char pointer
 * Return: always success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_write;
	ssize_t length;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | 0_APPEND, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		length = strlen(text_content);
		bytes_write = write(fd, text_content, length);
		if (bytes_write == -1 || bytes_write != length)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);

	return (1);
}
