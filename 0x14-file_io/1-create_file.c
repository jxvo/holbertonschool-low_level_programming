#include <unistd.h>
#include <fcntl.h>
#include "holberton.h"

/**
 * create_file - creates a file and fills it with text
 * @filename: name of file to create
 * @text_content: text that will go into the new file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t wbyte = 0;

	if (!filename)
		return (-1);
	text_content = (!text_content) ? "" : text_content;
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);
	while (text_content[len])
		len++;
	wbyte = write(fd, text_content, len);
	if (wbyte == -1)
		return (-1);
	close(fd);
	return (1);
}
