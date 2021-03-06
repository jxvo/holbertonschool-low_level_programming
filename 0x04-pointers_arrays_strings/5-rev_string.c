#include "holberton.h"

/**
 * rev_string - takes in a string and reverses it
 * @s: string to reverse
 * Return: void
 */

void rev_string(char *s)
{
	char c;
	int l, r;

	for (r = 0; s[r]; r++)
		;
	for (r--, l = 0; l < r; l++, r--)
	{
		c = s[r];
		s[r] = s[l];
		s[l] = c;
	}
}
