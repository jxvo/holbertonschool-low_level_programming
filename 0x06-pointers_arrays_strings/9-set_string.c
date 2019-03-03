#include "holberton.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to a pointer to a string
 * @to: *pointer to a string
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
