#include "main.h"
#include <stdio.h>

/**
 * more_numbers - printing numbers from 0 -14 multiple times
 * @void: parameter is empty
 * Return: int Always 0 (Success)
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
		}
		_putchar(10);
	}
}
