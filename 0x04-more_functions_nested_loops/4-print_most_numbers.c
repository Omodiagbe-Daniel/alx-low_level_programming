#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - printing numbers from 0 - 9 excluding 2 and 4
 * @void: parameter is empty
 * Return: int Always 0 (Success)
 */
void print_most_numbers(void)
{
char c;

for (c = 48; c <= 57; c++)
{
if (c == 50 || c == 54)
	continue;
_putchar(c);
}
_putchar(10);
}
