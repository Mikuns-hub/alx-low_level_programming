#include <stdio.h>
/**
 * main - Program entry
 * Return: 0 (Success)
 */

int main(void)
{
	char b;

	b = 'a';
	while
		(b <= 'z')
		{
			if ((b != 'q' && b != 'e') && b <= 'z')
				putchar(b);
			b++;
		}
	putchar('\n');
	return (0);
}