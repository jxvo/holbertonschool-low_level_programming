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
	char *buffer, *pathbuf, *delim1 = "\t ", *delim2 = ":=";
	size_t bufsize = 0, idx = 0;
	pid_t pid = 0;
	ssize_t chr;
	int status;
	extern char **environ;
	char **cp_env = environ;

	/*idx = 0;
	printf("\nEnvironments via char **envp\n\n");
	while (envp[idx])
	{
		printf("%s\n", envp[idx]);
		idx++;
		}*/

	if (argc < 1)
		return (-1);
	while (1)
	{
		write(STDERR_FILENO, "go ahead, make my day$ ", 23);
		chr = getline(&buffer, &bufsize, stdin);
		if (chr < 0)
			break;
		if (buffer[chr - 1] == '\n')
			buffer[chr - 1] = '\0';

		tokens = tokenizer(buffer, delim1);
		if (tokens == NULL)
			return (-1);
		pathbuf = pathfinder(envp);
		path = tokenizer(pathbuf, delim2);

/* first index will include "PATH=" */
		pid = fork();
		if (pid < 0)
			perror(argv[0]);
		if (pid == 0)
		{
			execve(buffer, tokens, envp);
			perror(argv[0]);
		}
		else
			wait(&status);
	}
	if (chr < 0)
		write(STDERR_FILENO, "\n", 1);
	free(buffer);

	idx = 0;
	while (tokens[idx])
	{
		free(tokens[idx]);
		idx++;
	}
	free(tokens);

	idx = 0;
	while (path[idx])
	{
		free(path[idx]);
		idx++;
	}
	free(path);



	return (0);
}
