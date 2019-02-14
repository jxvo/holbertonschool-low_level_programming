#include "holberton.h"

/**
 * print_last_digit - obtains absolute value, then prints last number
 * @n: number to cut
 * Return: returns last number of n
 */

int print_last_digit(int n)
{
	int f;

	if (n < 0)
		n = -n;
	f = n % 10;
	_putchar(f + '0');
	return (f);
}
