#include <stdlib.h>
#include "holberton.h"

/**
 * binary_to_uint - converts a base2 binary to base10 unsigned int
 * @b: string of binary characters to evaluate
 *
 * Return: converted base10 numbers, 0 if failure
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, base = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		base = base * 2 + b[i] - '0';
	}
	return (base);
}
