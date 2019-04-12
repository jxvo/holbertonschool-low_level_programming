#include "shell.h"

/**
 * _strlen - gets the length of a string
 * @str: string to evaluate
 *
 * Return: unsigned int character count
 */
size_t _strlen(const char *str)
{
	size_t i = 0;
	while (str[i])
		i++;
	return (i);
}

/**
 * tokenizer - splits a string into an array of tokens
 * @str: string to be tokenized and packaged
 * @chr: length of string (char count)
 *
 * Return: vector array with tokens
 */
char **tokenizer(char *str, ssize_t chr)
{
	size_t tkn = 1, idx = 0, io = 0;
	char **tokens;
	char *buf, *token, *bufptr, *delim = "\t ";

	buf = strdup(str);
	if (buf == NULL)
		return (NULL);
	bufptr = buf;
	while (*bufptr)
	{
		if (*bufptr == ' ' && io == 0)
		{
			tkn++;
			io = 1;
		}
		else if (*bufptr != ' ' && io == 1)
			io = 0;
		bufptr++;
	}
	tokens = malloc(sizeof(char *) * (tkn + 1));
	token = strtok(buf, delim);
	while (token)
	{
		tokens[idx] = strdup(token);
		if (tokens[idx] == NULL)
		{
			free(tokens);
			return (NULL);
		}
		token = strtok(NULL, delim);
		idx++;
	}
	tokens[idx] = NULL;

	while(tokens)
	{
		printf("%s\n", *tokens);
		tokens++;
	}
	free(buf);
	return (tokens);
}
