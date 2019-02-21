#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: string to check
 * Return: length of string
 */

int _strlen(char *s)
{
	int length;

	for (length = 0; *s++ != '\0'; length++)
		;
	return (length);
}
