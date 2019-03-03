#include "holberton.h"

/**
 * _strspn - gets the length of a prefix string
 * @s: string
 * @accept: bytes to measure
 * Return: unsigned int length
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count, a, b;

	for (count = 0, a = 0; s[a]; a++)
	{
		if (count != a)
			break;
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
				count++;
		}
	}
	return (count);
}
