#include <string.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - create a file
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: Success: 1, Failure : -1
 */

int create_file(const char *filename, char *text_content)
{
    int file_desc, _write;
    size_t text_len = (text_content != NULL) ? strlen(text_content) : 0;

    if (!filename)
        return (-1);

    file_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
    if (file_desc == -1)
        return (-1);

    if (text_len > 0)
    {
        _write = write(file_desc, text_content, text_len);
        if (_write == -1 || (size_t)_write != text_len)
        {
            close(file_desc);
            return (-1);
        }
    }

    close(file_desc);
    return (1);
}

