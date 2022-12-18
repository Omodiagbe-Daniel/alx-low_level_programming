#include "main.h"
#include <stdio.h>

/**
* print_times_table - times table
* @n: parameter
* Return: Nothing
*/

void print_times_table(int n)
{
	int i, j, num, number;

	if (n > 15 || n < 0)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			num = i * j;
			if (j == 0)
			{
				_putchar(num + '0');
			}
			if (num > 9 && num < 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(num / 10 + '0');
				_putchar(num % 10 + '0');
			}
			else if (num >= 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(num / 100 + '0');
				number = num / 10;
				_putchar(number % 10 + '0');
				_putchar(num % 10 + '0');
			}
			else if (j > 0 && num < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(num + '0');
			}
		}

		_putchar(10);
	}
}
