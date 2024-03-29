#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to close.
 *
 * Return: None.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * print_error - Prints an error message.
 * @message: The error message format string.
 * @filename: The filename associated with the error.
 * @code: The error code.
 *
 * Return: None.
 */
void print_error(const char *message, const char *filename, int code)
{
	dprintf(STDERR_FILENO, message, filename);
	exit(code);
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		print_error("Error: Can't read from file %s\n", argv[1], 98);
	}

	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to == -1)
	{
		print_error("Error: Can't write to %s\n", argv[2], 99);
	}

	while ((r = read(from, buffer, BUFFER_SIZE)) > 0)
	{
		w = write(to, buffer, r);
		if (w == -1 || w != r)
		{
			print_error("Error: Can't write to %s\n", argv[2], 99);
		}
	}

	if (r == -1)
	{
		print_error("Error: Can't read from file %s\n", argv[1], 98);
	}

	close_file(from);
	close_file(to);

	return (0);
}

