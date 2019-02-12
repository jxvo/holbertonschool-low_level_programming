#include "holberton.h"

/**
 * print_sign - prints the sign of a number's value
 * @n: number to be checked
 * Return: returns 1 if positive, 0 if zero, and -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
