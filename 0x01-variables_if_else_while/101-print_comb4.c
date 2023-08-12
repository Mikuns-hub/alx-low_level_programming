#include <stdio.h>
/**
 * main - The beginning
 * Return: 0 (Success)
 */
int main(void)
{
	int single = '0';
	int doubles = '0';
	int triple = '0';

	for (triple = '0'; triple <= '9'; triple++)
	{
		for (doubles = '0'; doubles <= '9'; doubles++)
		{
			for (single = '0'; single <= '9'; single++)
			{
				if (!((single == doubles) || (doubles == triple) || (doubles > single) || (triple > doubles)))
				{
					putchar(triple);
					putchar(doubles);
					putchar(single);
					if (!(single == '9' && triple == '7' && doubles == '8'))
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
