#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

void print_error(const char *message, const char *filename, int code)
{
	dprintf(STDERR_FILENO, message, filename);
	exit(code);
}

int main(int argc, char *argv[])
{
	int from, to;
	ssize_t r, w;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		print_error("Usage: cp file_from file_to\n", "", 97);
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

	if (close(from) == -1)
	{
		print_error("Error: Can't close fd %d\n", from, 100);
	}

	if (close(to) == -1)
	{
		print_error("Error: Can't close fd %d\n", to, 100);
	}

	return (0);
}
