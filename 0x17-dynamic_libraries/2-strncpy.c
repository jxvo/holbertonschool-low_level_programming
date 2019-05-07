#include "holberton.h"

/**
 * _strncpy - simple strncpy implementation
 * @dest: string to replace
 * @src: string to copy
 * @n: number of bytes of @src to copy
 * Return: modified @dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *sub;

	for (sub = dest; *sub && *src && n > 0; sub++, src++, n--)
		*sub = *src;
	for (; n > 0; n--, sub++)
		*sub = '\0';
	return (dest);
}
