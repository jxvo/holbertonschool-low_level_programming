#include <stdio.h>

/**
 * main - prints all possible combinations of two digit numbers
 * Return: returns zero
 */

int main(void)
{
	int tens;
	int ones;

	for (tens = 48; tens <= 57; tens++)
	{
		for (ones = tens + 1; ones <= 57; ones++)
		{
			if (tens < ones)
			{
				putchar(tens);
				putchar(ones);
				if (tens < 56 || ones < 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
