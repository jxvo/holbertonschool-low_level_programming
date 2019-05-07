#include "holberton.h"

/**
 * _strcpy - copies a string pointed to by src, including null term byte
 * @dest: string gets copied here
 * @src: string to copy
 * Return: updated @dest
 */

char *_strcpy(char *dest, char *src)
{
	char *ret;

	for (ret = dest; *src; src++, dest++)
	{
		*dest = *src;
	}
	*dest = '\0';
	return (ret);
}
