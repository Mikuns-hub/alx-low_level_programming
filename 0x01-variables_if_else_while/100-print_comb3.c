#include <stdio.h>
/**
 * main - Program Entries
 * Return: 0 (Success)
 */

int main(void)
{
	int single = '0';
	int doubles = '0';

	for (doubles = '0'; doubles <= '9'; doubles++)
	{
		for (single = '0'; single <= '9'; single++)
		{
			if (!((single == doubles) || (doubles > single)))
			{
				putchar(doubles);
				putchar(single);
				if (!(single == '9' && doubles == '8'))
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
