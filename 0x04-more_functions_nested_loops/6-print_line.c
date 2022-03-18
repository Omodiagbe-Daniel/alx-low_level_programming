#include "main.h"
#include <stdio.h>

/**
 * print_line - printing a line in the terminal
 * @n: parameter being tested
 * Return: int Always 0 (Success)
 */
void print_line(int n)
{
int i;

for (i = 0; i < n; i++)
	_putchar('_' * n);
_putchar(10);
}
