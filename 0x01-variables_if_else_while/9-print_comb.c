#include <stdio.h>

/**
 * main - prints all possible combinations of single digit numnbers
 * Return: returns zero
 */

int main(void)
{
	char n = '0';

	for (; n <= '9'; n++)
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
