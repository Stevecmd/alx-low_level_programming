#include "unistd.h"
#include <fcntl.h>
#include <string.h>

/**
 * append_text_to_file - append text to file
 * @filename: name of the file
 * @text_content: text_content is the NULL terminated string to add at the end of the file
 * Return: Success ? 1 : -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc, _write;
	size_t text_len;

	if (!filename)
		return (-1);

	file_desc = open(filename, O_WRONLY | O_APPEND);
	if (file_desc == -1)
		return (-1);

	if (!text_content)
	{
		close(file_desc);
		return (1);
	}

	text_len = strlen(text_content);
	_write = write(file_desc, text_content, text_len);
	if (_write == -1 || (size_t)_write != text_len)
	{
		close(file_desc);
		return (-1);
	}

	close(file_desc);
	return (1);
}

