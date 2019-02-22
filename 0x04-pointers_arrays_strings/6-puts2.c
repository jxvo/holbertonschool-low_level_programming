#include "holberton.h"

/**
 * puts2 - prints one char out of 2 of a string
 * @str: string loop through
 * Return: void
 */

void puts2(char *str)
{
	char *result;

	result = str;
	while (*str++)
		;
	for (; result < str; result += 2)
		_putchar(*result);
	_putchar('\n');
}
