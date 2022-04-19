#include "main.h"
#include <stdio.h>

/**
 * more_numbers - printing numbers from 0 -14 multiple times
 * @void: parameter is empty
 * Return: int Always 0 (Success)
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j < 15)
		{
			if (j <= 9)
			{
			_putchar(j + '0');
			}
			if (j > 9)
			{
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			}
			j++;
		}
		_putchar(10);
		i++;
	}
}

