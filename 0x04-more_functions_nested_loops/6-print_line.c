#include "main.h"
#include <stdio.h>

/**
 * print_line - printing a line in the terminal
 * @n: parameter being tested
 * Return: int Always 0 (Success)
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar(95);
			i++;
		}
	}
	_putchar('\n');
}
