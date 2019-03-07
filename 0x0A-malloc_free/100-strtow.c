#include <stdlib.h>
#include "holberton.h"

#include <stdio.h>

/**
 * strtow - splits a string with words separated by spaces to an array of words
 * @str: string to split
 * Return: pointer to an array of words
 */
char **strtow(char *str)
{
	char **arr;
	int wc = 0, cc, x, y;

	for (x = 0, y = 0; str[y]; y++)
	{
		if (str[y] != ' ')
		{
			for (x = y; str[x] && str[x] != ' '; x++)
			{
				if (x == y)
					wc++;
			}
			y = x;
		}
	}
	printf("Words in *str: %d\n", ++wc);
	arr = malloc(++wc * sizeof(char *));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (wc = 0, cc = 0, y = 0; str[y]; y++)
	{
		if (str[y] != ' ')
		{
			for (x = y; str[x] && str[x] != ' '; x++, cc++)
			{
				if (x == y)
					wc++;
			}
			y = x;
		}
		printf("Characters in word %d: %d\n", ++wc, ++cc);
		arr[wc] = malloc(++cc * sizeof(char));
		if (arr[wc] == NULL)
		{
			for (x = 0; x < wc; x++)
				free(arr[wc]);
			free(arr);
			return (NULL);
		}
	}
	for (wc = 0, cc = 0, y = 0; str[y]; y++)
	{
		if (str[y] != ' ')
		{
			for (x = y; str[x] && str[x] != ' '; x++, cc++)
			{
				if (x == y)
					wc++;
			}
			y = x;
			arr[wc][cc] = str[x];
		}
	}
	return (arr);
}
