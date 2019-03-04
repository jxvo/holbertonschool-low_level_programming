#include "holberton.h"

/**
 * factorial - return the factorial of a given number
 * @n: number to factorialize
 * Return: integer factorial, -1 if @n is negative
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n > 0)
		return (n * factorial(n - 1));
	return (1);
}
