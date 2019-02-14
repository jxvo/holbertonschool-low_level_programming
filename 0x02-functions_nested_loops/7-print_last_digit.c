#include "holberton.h"

/**
 * print_last_digit - obtains absolute value, then prints last number
 * @n: number to cut
 * Return: returns last number of n
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	_putchar((n % 10) + '0');
	return ((n % 10));
}
