#include <stdio.h>
#include "main.h"
/**
 * print_to_98 : printing out natural numbers of n to 98
 * @n : parameter is of type int
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	int r;

	if (n < 0)
	{
		for (r = n; r <= 98; r++)
		{
			printf("%d", r);
			if (r < 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else if (n == 0)
	{
                for (r = n; r <= 98; r++)
                {
                        printf("%d", r);
                        if (r < 98)
                        {
                                _putchar(',');
                                _putchar(' ');
                        }
                }
	}
	else
	{
                for (r = n; r <= 98; r++)
                {
                        printf("%d", r);
                        if (r < 98)
                        {
                                _putchar(',');
                                _putchar(' ');
                        }
                }
	}
	_putchar(10);
}
