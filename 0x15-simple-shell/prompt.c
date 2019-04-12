#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - gets character length of a string
 * @str: string to measure
 *
 * Return: unsigned integer length
 */
size_t _strlen(const char *str)
{
	size_t x = 0;
	while (str[x])
		x++;
	return (x);
}

/**
 * tokenizer - takes in a line and creates tokens using a separator
 * @line: line to split into tokens
 * @sep: constant separator character
 *
 * Return: array of token strings
 */
char **tokenizer(char *line, const char *sep)
{
	size_t n = 1, len;
	char **tokens, **tmp, *token;

	tokens = malloc(sizeof(char *));

	if (tokens == NULL)
		return (NULL);
	token = strtok(line, sep);
	while (token)
	{
		tmp = realloc(tokens, sizeof(char *) * (n + 1));
		if (tmp == NULL)
			return (NULL);
		tokens = tmp;
		tokens[n - 1] = malloc
	}
}

/**
 * main - prints what a user types using getline and breaks it into tokens
 *
 * Return: always 0
 */
int main(int argc, char **argv, char **envp)
{
	char *buffer = NULL;
	char **tokens;
	int status;
	pid_t process;
	size_t bufsize = 0;
	ssize_t characters;

	if (argc < 1)
		return (-1);
	while (1)
	{
		write(STD
	}

	printf("$ ");
	characters = getline(&buffer, &bufsize, stdin);
	if (characters == -1)
		return (-1);char *)
	printf("You typed: %s", buffer);
	/*printf("Characters read: %zd\nBuffer size: %zu\n", characters, bufsize);*/
	return (0);
}
