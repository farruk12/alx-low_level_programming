#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUFFER_SIZE 1024

/**
 *error_exit - exiting due to an error
 *@code: code
 *@message: const char
 */
void error_exit(int code, const char *message)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(code);
}

/**
 *main - entry point
 *@argc: argument count
 *@argv: argument vector
 *Return: always success
 */
int main(int argc, char *argv[])
{
	int fd_from;
	int fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;
	const char *file_from = argv[1];
	const char *file_to = argv[2];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to");
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file");
	fd_to = open(file_to, O_WRONLY | O_CREAT |
			O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP);
	if (fd_to == -1)
	{
		close(fd_from);
		error_exit(99, "Error: Can't write to file");
	}
	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
		close(fd_from);
		close(fd_to);
		error_exit(99, "Error: Can't write to file");
		}
	}
	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		error_exit(98, "Error: Can't read from file");
	}
	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close fd");
	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd");
	return (0);
}
