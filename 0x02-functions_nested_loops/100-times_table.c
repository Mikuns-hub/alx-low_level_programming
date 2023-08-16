#include "main.h"

/**
 * print_times_tables - Prints the tmes table of the point
 * @n:The value of the times table
 * Return:void
 */

void print_times_table(int n)
{
	int num1,num2,num3;

	if (n >= 0 && n <= 15)
	{
		for (num1 = 0; num1 <= n; num1++)
		{
			_putchar('0');
			for (num2 = 0; num2 <= n; num2++)
			{
				_putchar(',');
				_putchar(' ');
				num3 = num1 * num2;
				if (num3 <= 99)
				_putchar(' ');
				if (num3 <= 9)
				_putchar(' ');
				if (num3 <= 100)
				{
					_putchar((num3 / 100) + '0');
					_putchar(((num3 / 10)) % 10 + '0');
				}
				else if (num3 <= 99 && num3 >= '0')
				{
					_putchar((num3 / 10) + '0');
				}
			
					_putchar((num3 / 10) + '0');
				}
				_putchar('\n');
			}
	}
}

			

