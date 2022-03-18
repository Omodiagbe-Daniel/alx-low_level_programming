#include "main.h"
#include <stdio.h>

/**
 * more_numbers - printing numbers from 0 -14 multiple times
 * @void: parameter is empty
 * Return: int Always 0 (Success)
 */
void more_numbers(void)
{
int i;
int j;

for (i = 0; i <= 14; i++)
{
	j = 0;
	while (j >= 10)
		if (i >= 10)
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		j++;
}
_putchar(10);
}
