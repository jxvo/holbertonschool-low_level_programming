#include "holberton.h"

/**
 * _atoi - convert a string of numbers to an integer
 * @s: string to convert
 *
 * Return: converted integer
 */
int _atoi(char *s)
{
	int num = 0;
	unsigned char neg = 0;
	char *str;

	for (str = s; *str && (*str < '0' || *str > '9'); str++)
		if (*str == '-')
			neg = !neg;
	for (; *str >= '0' && *str <= '9'; str++)
	{
		num *= 10;
		if (neg == 1)
			num -= *str - '0';
		else
			num += *str - '0';
	}
	return (num);
}
