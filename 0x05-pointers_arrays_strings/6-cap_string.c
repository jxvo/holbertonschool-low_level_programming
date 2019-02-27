#include "holberton.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to check
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	char b[] = " \t\n,;.!?\"(){}";
	int x, y;

	for (x = 0; s[x]; x++)
	{
		if (x == 0 && s[x] >= 'a' && s[x] <= 'z')
			s[x] -= 32;
		for (y = 0; b[y]; y++)
		{
			if (s[x] == b[y] && s[x + 1] >= 'a' && s[x + 1] <= 'z')
				s[x + 1] -= 32;
		}
	}
	return (s);
}
