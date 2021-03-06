#include "holberton.h"

/**
 * _memset - fills first @n bytes of memory area @s with const. byte @b
 * @n: bytes of memory area
 * @s: memory area to fill
 * @b: constant byte
 * Return: pointer to memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *sub;

	for (sub = s; n--; sub++)
	{
		*sub = b;
	}
	return (s);
}
