#include <stdlib.h>
#include <fcntl.h>
#include "holberton.h"

/**
 * main - copies the content of a file to another file
 * @argc: integer number of arguments (must be 3)
 * @argv: array of arguments
 *
 * Return: 1 on success, exit with error code otherwise
 */
int main(int argc, char *argv[])
{
	char *f_to, *f_from;
	char buffer[1024];
	int fd_to, fd_from, bytes_read, bytes_wrote, close_to, close_from;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f_from = argv[1];
	f_to = argv[2];
	
}
