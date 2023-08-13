#include <stdio.h>
/**
 * main - The beginning
 * Return: 0 (Success)
 */

int main(void)
{
	int c;
	int b;

	for (c = 0; c < 100; c++)
	{
		for (b = 0; b < 100; b++)
		{
			if (c < b)
			{
				putchar((c / 10) + 48);
				putchar((c % 10) + 48);
				putchar(' ');
				putchar((b / 10) + 48);
				putchar((b % 10) + 48);
				if (c != 98 || b != 99)
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
