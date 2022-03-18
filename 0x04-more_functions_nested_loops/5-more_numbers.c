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

for (j = 0; j <= 10; j++)
{
j = 0;
while (i < 15)
{
if (i >= 10)
	_putchar((i / 10) + '0');
	_putchar((i % 10) + '0');
i++;
}
}
_putchar(10);
}
