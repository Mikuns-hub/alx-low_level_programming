#include <stdio.h>
/**
 * main - program entry
 * Return: 0 (Success)
 */
int main(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		putchar(b);
	}
	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}
	putchar ('\n');
	return (0);
}
