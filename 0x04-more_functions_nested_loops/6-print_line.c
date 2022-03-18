#include "main.h"
#include <stdio.h>

/**
 * print_line - printing a line in the terminal
 * @n: parameter being tested
 * Return: int Always 0 (Success)
 */
void print_line(int n)
{
if (n <= 0)
	_putchar('\n');
else
	_putchar('_' * n);
}
