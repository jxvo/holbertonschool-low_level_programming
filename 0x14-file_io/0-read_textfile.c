#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to POSIX STDOUT_FILENO
 * @filename: case-sensitive name of file to read
 * @letters: max number of letters to print
 *
 * Return: actual number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t rbytes = 0, wbytes = 0;
	int fd;

	if (!filename || letters <= 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	rbytes = read(fd, buff, letters);
	if (rbytes == -1)
		return (0);
	wbytes = write(STDOUT_FILENO, buff, rbytes);
	if (wbytes == -1 || wbytes < rbytes)
		return (0);
	free(buff);
	close(fd);
	return (wbytes);
}
