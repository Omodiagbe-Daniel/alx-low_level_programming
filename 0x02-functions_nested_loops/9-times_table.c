#include "main.h"
/**
 * times_table - printing 9 times table
 * void : carries no parameter
 * Return: Always 0 (Success)
 */
void times_table(void)
{
int i;
int j;
int n;

for (i = 0; i <= 9; i++)
{
	for (j = 0; j <= 9; j++)
	{
		n = i * j;
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
		if (n > 9)
		{
			_putchar(' ');
			_putchar(n / 10 + '0');
			_putchar(n % 10 + '0');
		}
		else
		{
			_putchar(',');
			_putchar(' ');
		}
		if (j != 9)
		{
			_putchar(',');
		}
	_putchar('\n');
	}
}
}
