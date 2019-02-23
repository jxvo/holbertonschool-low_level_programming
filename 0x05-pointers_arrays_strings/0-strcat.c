#include "holberton.h"

/**
 * _strcat - appends @src string to the @dest string
 * @dest: string to append to
 * @src: string to append
 * Return: appended string
 */
char *_strcat(char *dest, char *src)
{
	char *sub;

	for (sub = dest; *sub; sub++)
		;
	for (; *src; src++, sub++)
		*sub = *src;
	return (dest);
}
