#include "main.h"
#include <stdio.h>

/**
 * reset_to_98 - a pointer to an int as parameter and updates it value to 98
 * @n: parameter being tested
 * Return: Always 0
 */

void reset_to_98(int *n)
{
	int p;

	n = &p;

	*n = 98;

	_putchar(p / 10 + '0');
	_putchar(p % 10 + '0');
}


