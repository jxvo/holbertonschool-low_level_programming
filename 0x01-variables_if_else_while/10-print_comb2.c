#include <stdio.h>

/**
 * main - prints the numbers 00 to 99
 * Return: returns zero
 */

int main(void)
{
	int tens = 48;

	for (; tens <= 57; tens++)
	{
		int ones = 48;

		for (; ones <= 57; ones++)
		{
			putchar(tens);
			putchar(ones);
			if ((tens < 57) || (ones < 57))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
