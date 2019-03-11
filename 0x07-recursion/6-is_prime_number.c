#include "holberton.h"

/**
 * is_prime_number - returns get_prime using @n, starting at 2
 * @n: integer
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (get_prime(n, 2));
}

/**
 * get_prime - checks whether @n is a prime number
 * @n: integer to evaluate
 * @i: integer to to increment
 *
 * Return: 1 if prime, 0 otherwise
 */
int get_prime(int n, int i)
{
	if (n <= 2)
		return (n == 2);
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (get_prime(n, i + 1));
}
