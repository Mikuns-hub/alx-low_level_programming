#include <stdio.h>
/**
 * main - print the first 98 fibonacci numbers, starting with 1 and 2
 * Return: Always 0
 */

int main(void)
{
	int i = 0;
	unsigned long int a = 0, b = 1, sum;

	while (i < 98)
	{
		sum = a + b;
		a = b;
		b = sum;
		printf("%lu", sum);

		if (i < 97)
			printf(",");
		i++;
	}
	putchar('\n');
	return (0);
}
