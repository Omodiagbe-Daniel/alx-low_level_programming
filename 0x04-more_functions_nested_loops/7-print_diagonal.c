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
	int j;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar('\\');
			{
				for (j = 0; i < j; j++)
				_putchar(' ');
			}
			i++;
			_putchar(10);
		}
	}
}
