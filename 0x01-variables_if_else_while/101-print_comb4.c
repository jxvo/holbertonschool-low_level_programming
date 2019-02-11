#include <stdio.h>

/**
 * main - prints all possible combinations of three digits
 * Return: returns zero
 */

int main(void)
{
	int hunds, tens, ones;

	for (hunds = 48; hunds <= 55; hunds++)
	{
		for (tens = 49; tens <= 56; tens++)
		{
			for (ones = 50; ones <= 57; ones++)
			{
				if (hunds < tens && tens < ones)
				{
					putchar(hunds);
					putchar(tens);
					putchar(ones);
					if (hunds < 55 || tens < 56 || ones < 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
