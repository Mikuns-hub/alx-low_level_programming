#include <stdio.h>
/**
 * main - Program Entry
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d;
	char b;

	for (d = 0; d < 10; d++)
	{
		putchar(d + '0');
	}

	b = 'a';
	while (b <= 'f')
	{
		putchar(b);
		b++;
	}

	putchar('\n');
	return (0);
}
