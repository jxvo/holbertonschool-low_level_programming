#include "holberton.h"

/**
 * get_sqrt - evalutes the square root of @n
 * @i: integer to evaluate
 * @s: square root, incremented by 1, starting from 1
 * Return: @s once @n is reached
 */
int _sqrt_recursion(int n)
{
	static int s = 1;

	if (s * s == n)
	{
		return (s);
	}
	else if (s * s > n || n > 0)
	{
		return (-1);
	}
	else
	{
		s++;
		return(_sqrt_recursion(n));
	}
}
