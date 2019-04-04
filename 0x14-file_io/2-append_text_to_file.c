#include <unistd.h>
#include <fcntl.h>
#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: exact name of file to append to
 * @text_content: text to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t wbyte = 0;

	if (!filename)
		return (-1);
	if (text_content)
	{
		fd = open(filename, O_APPEND | O_WRONLY);
		if (fd == -1)
			return (-1);
		while (text_content[len])
			len++;
		wbyte = write(fd, text_content, len);
		if (wbyte == -1)
			return (-1);
		close(fd);
	}
	return (1);
}
