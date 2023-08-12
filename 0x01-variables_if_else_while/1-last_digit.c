#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: eachtime return 0 (Success)
 */

int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	printf("Last digit of %d is %d and is ", n, m);
	if (m > 5)
		printf("greater than 5\n");
	if (m == 0)
		printf("0\n");
	if (m < 6 && m != 0)
		printf("less than 6 and not 0\n");
	return (0);
}
