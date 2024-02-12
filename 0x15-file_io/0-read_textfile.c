#include "main.h"

/**
 * read_textfile - read a file and print to stdout
 * @filename: file opened or read
 * @letters: number of letters it should read and print
 * Return: returns the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
    int file_desc;
    ssize_t _read, _write;
    char *buffer;

    if (!filename)
        return (0);

    file_desc = open(filename, O_RDONLY);
    if (file_desc == -1)
        return (0);

    buffer = malloc(sizeof(char) * letters);
    if (!buffer)
    {
        close(file_desc);
        return (0);
    }

    _read = read(file_desc, buffer, letters);
    if (_read == -1)
    {
        free(buffer);
        close(file_desc);
        return (0);
    }

    _write = write(STDOUT_FILENO, buffer, _read);
    if (_write != _read)
    {
        free(buffer);
        close(file_desc);
        return (0);
    }

    free(buffer);
    close(file_desc);
    return (_read);
}
