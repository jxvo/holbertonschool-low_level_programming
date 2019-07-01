#include "holberton.h"

/**
 * is_palindrome - returns whether a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int n;

	for (n = 0; s[n]; n++)
		;
	if (n == 0)
		return (1);
	return (get_palindrome(s, 0, n - 1));
}

/**
 * get_palindrome - returns whether a string is a palindrome, recursively
 * @s: string to test
 * @a: int index of first letter of string, increased by one
 * @z: int index of last letter of string, decreased by one
 *
 * Return: 1 if string is palindrome, 0 if false
 */
int get_palindrome(char *s, int a, int z)
{
	if (a == z)
		return (1);
	if (s[a] != s[z])
		return (0);
	if (a < z + 1)
		return (get_palindrome(s, a + 1, z - 1));
	return (1);
}
