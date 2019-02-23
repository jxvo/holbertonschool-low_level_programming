#include "holberton.h"

/**
 * _strncat - concatenates @src string for a max of @n bytes to string @dest
 * @dest: string to append to
 * @src: string to append
 * @n: max bytes from @src
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *sub;

	for (sub = dest; *sub; sub++)
		;
	for (; *src && n > 0; sub++, src++, n--)
		*sub = *src;
	return (dest);
}
