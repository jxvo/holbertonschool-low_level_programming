#include "holberton.h"

/**
 * print_alphabet - prints lowercase alphabet, followed by '\n'
 * Return: none
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
