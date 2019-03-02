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

	for (; *haystack; haystack++)
	{
		for (sub = needle; *sub; sub++)
		{
			if (sub[0] != *haystack)
				break;
			if (*sub == *haystack)
				return (haystack);
		}
	}
	return (0);
}
