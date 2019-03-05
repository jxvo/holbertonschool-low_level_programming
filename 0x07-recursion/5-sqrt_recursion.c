#include "holberton.h"

/**
 * get_sqrt - evalutes the square root of @n
 * @i: integer to evaluate
 * @s: square root, incremented by 1, starting from 1
 * Return: @s once @n is reached
 */
int get_sqrt(int i, int s)
{
	if (s * s == i)
	{
		return (s);
	}
	else if (s * s > i)
	{
		return (-1);
	}
	return (get_sqrt(i, s + 1));
}

/**
 * _sqrt_recursion - checks if @n has a  natural sqaure root
 * @n: integer to evaluate
 * Return: square root, or -1 if @n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);

	}
	return (get_sqrt(n, 1));
}
