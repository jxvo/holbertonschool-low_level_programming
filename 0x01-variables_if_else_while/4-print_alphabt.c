#include <stdio.h>

/**
 * main - prints alphabet, excluding 'q' and 'e'
 * Return: returns zero
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
