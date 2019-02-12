#include "holberton.h"

/**
 * print_alphabet - prints lowercase alphabet, followed by '\n'
 * Return: void
 */
void print_alphabet(void)
{
	int c = 'a';

	for (; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
