#include "holberton.h"

/**
 * _islower - checks for lowercase character
 * @c: The character to check
 * Return: ret value 0 or 1
 */

int _islower(int c)
{
	int  i;
	int ret = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			ret = 1;
		}
	}
	return (ret);
}
