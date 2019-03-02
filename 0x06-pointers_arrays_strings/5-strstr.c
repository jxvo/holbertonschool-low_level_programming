#include "holberton.h"

/**
 * _strstr - searches for first occurence of substring @needle in @haystack
 * @needle: substring to search for
 * @haystack: string to check
 * Return: pointer to char with rest of string after first occurence
 */
char *_strstr(char *haystack, char *needle)
{
	char *sub;
	int x;

	for (; *haystack; haystack++)
	{
		for (sub = needle, x = 0; *sub; sub++)
		{
			if (sub[x] != *haystack)
				break;
			if (*sub == *haystack)
			;x++	}
		}
	}
	return (0);
}
