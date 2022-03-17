#include "main.h"
#include <stdio.h>

/**
 * print_numbers - printing numbers from 0 - 9 followed by a new line
 * @void: parameter is empty
 * Return: int Always 0 (Success)
 */
void print_numbers(void)
{
char c;

for (c = 48; c <= 57; c++)
	_putchar(c);
_putchar(10);
}
