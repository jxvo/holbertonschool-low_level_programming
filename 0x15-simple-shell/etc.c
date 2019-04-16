#include "shell.h"

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the
 * string given as a parameter
 * @str: string to be duplicated
 *
 * Return: pointer to the duplicated string
 * or NULL if it fails
 */

char *_strdup(char *str)
{
	char *p;
	int i, len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = _strlen(str);

	p = malloc(sizeof(char) * (len + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; *str != '\0'; str++, i++)
	{
		p[i] = str[0];
	}
	p[i++] = '\0';
	return (p);
}

/**
 * _strchr - searches a string for a specific character
 * @str: string to examine
 * @chr: character to look for
 *
 * Return: pointer to index of first occurence, NULL if not found
 */
char *_strchr(char *str, int chr)
{
	while (*str)
	{
		if (*str == chr)
			return (str);
		str++;
	}
	return (NULL);
}

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
 * _strncmp - sternly compares two strings up to n bytes
 * @first: first string to compare
 * @second: second string to compare
 *
 * Return: value < 0 if (first < second)
 * value > 0 if (first > second)
 * value = 0 if (first == second)
 */
int _strncmp(const char *first, const char *second, size_t n)
{
	size_t idx;

	for (idx = 0; first[idx] && second[idx] && idx < n; idx++)
	{
		if (first[idx] != second[idx])
			return (first[idx] - second[idx]);
	}
	return (0);
}

/**
 * pathfinder - searches environment variables for PATH
 * @envp: array of environment variable strings
 *
 * Return: not a $40,000 SUV, but a buffer to PATH env variable
 */
char *pathfinder(char **envp)
{
	size_t idx = 0;

	while (envp[idx])
	{
		if (_strncmp(envp[idx], "PATH=", 5) == 0)
			return (envp[idx]);
		idx++;
	}
	return (NULL);
}

/**
 * pathappend - concatenates a path token with a cmd token
 * @path: path string to append to
 * @cmd: command string to append
 *
 * Return: buffer to appended path
 */
char *pathappend(char *path, char *cmd)
{
	char *buffer;
	size_t a = 0, b = 0;

	if (cmd == 0) { cmd = ""; }
	if (path == 0) { path = ""; }
	buffer = malloc(sizeof(char) * _strlen(path) + _strlen(cmd) + 2);
	if (buffer == NULL)
		return (NULL);
	while (path[a])
		buffer[a] = path[a++];
	buffer[a++] = '/';
	while (cmd[b])
		buffer[a + b] = cmd[b++];
	buffer[a + b] = '\0';

	printf("New path token is: %s\n", buffer);

	return (buffer);
}

/**
 * tokenizer - splits a string into an array of tokens
 * @str: string to be tokenized and packaged
 * @chr: length of string (char count)
 *
 * Return: vector array with tokens
 */
char **tokenizer(char *str, char *delim)
{
	size_t idx = 0, io = 0;
	int tkn = 1;
	char **tokens;
	char *buf, *token, *bufptr;

	buf = strdup(str);
	if (buf == NULL)
		return (NULL);
/*token counter*/
	bufptr = buf;
	while (*bufptr)
	{
		if (_strchr(delim, *bufptr) != NULL && io == 0)
		{
			tkn++;
			io = 1;
		}
		else if (_strchr(delim, *bufptr) == NULL && io == 1)
			io = 0;
		bufptr++;
	}
/*end token counter*/
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

	idx = 0;
	printf("%d tokens:\n", tkn);
	while(tokens[idx])
	{
		printf("%s\n", tokens[idx]);
		idx++;
	}
	free(buf);

	return (tokens);
}
