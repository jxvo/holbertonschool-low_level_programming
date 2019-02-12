#include "holberton.h"

/**
 * _abs - computes absolute value of integer
 * @n: number to check
 * Return: returns absolute value
 */
int _abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
