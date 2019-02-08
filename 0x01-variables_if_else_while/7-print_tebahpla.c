#include <stdio.h>

/**
 * main - prints alphabet in reverse with new line
 * Return: returns zero
 */

int main(void)
{
	char c = 'z';

	for (; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
