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
