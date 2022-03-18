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

while (i < n)
	_putchar(92 * n);
	i++;
	_putchar(10);
	j = 0;
	while (j < i)
		_putchar(' ' * n);
}
