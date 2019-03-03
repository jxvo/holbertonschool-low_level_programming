#include "holberton.h"

/**
 * _memcpy - copies @n bytes from one memory area @src to another @dest
 * @n: number of bytes to copy
 * @src: source array
 * @dest: destination array
 * Return: pointer to @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *sub;

	for (sub = dest; n--; sub++, src++)
	{
		*sub = *src;
	}
	return (dest);
}
