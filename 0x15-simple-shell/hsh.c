#include "shell.h"

/**
 * main - execute a simple shell that takes in commands
 * @argc: number of arguments
 * @argv: array of arguments
 * @envp: array of evironment variables
 *
 * Return: 0
 */
int main(int argc, char **argv, char **envp)
{
	char **tokens, **path;
	char *buffer, *pathbuf;
	size_t bufsize = 0, idx = 0;
	pid_t pid = 0;
	ssize_t chr;
	int status;

	if (argc < 1)
		return (-1);
	while (1)
	{
		write(STDERR_FILENO, "$ ", 2);
		chr = getline(&buffer, &bufsize, stdin);
		if (chr < 0)
			break;
		if (buffer[chr - 1] == '\n')
			buffer[chr - 1] = '\0';

		tokens = tokenizer(buffer, "\t ");
		if (tokens == NULL)
			return (-1);
		pathbuf = getenv("PATH");
		path = tokenizer(pathbuf, ":");

		/* print path tokens */
		idx = 0;
		while (path[idx])
		{
			printf("%s\n", path[idx]);
			idx++;
		}

/* first index will include "PATH=" */
		pid = fork();
		if (pid < 0)
			perror(argv[0]);
		if (pid == 0)
		{
			execve(buffer, argv, envp);
			perror(argv[0]);
		}
		else
			wait(&status);
	}
	if (chr < 0)
		write(STDERR_FILENO, "\n", 1);
	free(buffer);
	while (tokens[idx])
	{
		free(tokens[idx]);
		idx++;
	}
	free(tokens);
	return (0);
}
