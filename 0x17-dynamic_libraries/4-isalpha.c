#include "holberton.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character to check
 * Return: On success 1
 */

int _isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
