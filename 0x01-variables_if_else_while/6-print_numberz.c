#include <stdio.h>

/**
 * main - prints single digit base 10 numbers, without using 'char'
 * Return: returns zero
 */

int main(void)
{
	int c = 48;

	for (; c <= 57; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
