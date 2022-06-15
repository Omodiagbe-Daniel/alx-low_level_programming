#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - printing a diagonal in the terminal
 * @n: parameter being tested
 * Return: int Always 0 (Success)
 */
void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
			if (i != n - 1)
			{
				_putchar(10);
			}
			for (j = 0; (j < i + 1) && i != n - 1; j++)
			{
				_putchar(' ');
			}
		}
	}
	_putchar(10);
}
