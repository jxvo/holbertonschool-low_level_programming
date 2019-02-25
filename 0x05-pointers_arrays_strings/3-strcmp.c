#include "holberton.h"

/**
 * _strcmp - compares the first ASCII values of two strings
 * @s1: first string
 * @s2: second string
 * Return: value < 0 if (@s1 < @s2), value > 0 if (@s1 > @s2), 0 if equal
 */
int _strcmp(char *s1, char *s2)
{
	if (*s1 < *s2 || *s1 > *s2)
		return (*s1 - *s2);
	return (0);
}
