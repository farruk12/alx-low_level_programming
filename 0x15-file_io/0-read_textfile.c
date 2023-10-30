#include "main.h"
/**
 * read_textfile -  function that reads a text file and prints it t
 * @filename: - pointer to a character
 * @letters: pointer to unsigned integer
 * Return: always success
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t bytes_read;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}
	buffer = (char *)malloc(letters);
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}
	bytes_read = read(file, buffer, letters);
	if (bytes_read <= 0)
	{
		free(buffer);
		close(file);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written != bytes_read)
	{
		free(buffer);
		close(file);
		return (0);
	}
	free(buffer);
	close(file);
	return (bytes_written);
}
