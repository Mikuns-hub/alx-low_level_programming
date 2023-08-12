#include <stdio.h>
/**
 * main - The beginning
 * Return: 0 (Success)
 */
int main(void)
{
	int single = '0';
	int doubles = '0';
	int triples = '0';

	for (triples = '0'; triples <= '9'; triples++)
	{
		for (doubles = '0'; doubles <= '9'; doubles++)
		{
			for (single = '0'; single <= '9'; single++)
			{
				if (!((single == doubles) || (doubles == triples) || (doubles > single) || (triples > doubles))){
					putchar(triples);
					putchar(doubles);
					putchar(single);
					if (!(single == '9' && triples == '7' && doubles == '8')){
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
