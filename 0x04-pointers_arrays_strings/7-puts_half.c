#include "holberton.h"

/**
 * puts_half - prints second half of string
 * @str: String to modify
 * ReturnL void
 */

void puts_half(char *str)
{
	char *sub;
	int l;

	for (l = 0, sub = str; *sub; sub++)
		l++;
	for (sub -= l / 2; *sub; sub++)
		_putchar(*sub);
	_putchar('\n');
}
