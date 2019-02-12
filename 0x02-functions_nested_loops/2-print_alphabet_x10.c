#include "holberton.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet 10x, each followed by '\n'
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int reps = 0;

	for (; reps <= 9; reps++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
