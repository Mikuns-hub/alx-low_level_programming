#include "main.h"

/**
 * main - print number from 1 - 100
 * Return 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0 && a % 5 != 0)
		{
			printf("Fizz");
		}
		else if (a % 5 == 0 && a % 3 != 0)
		{
			printf("Buzz");
		}
		else if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (a == 1)
		{
			printf("%d", i);
		}
		else
		{
			printf("%d", i)
		}
	}
	printf("\n");
}



