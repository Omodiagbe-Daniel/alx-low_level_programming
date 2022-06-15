#include "main.h"

/**
* print_triangle - prints a triangle
* @size: parameter considered
* Return: Nothing
*/

void print_triangle(int size)
{
	int i = 0, j = 0;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < size - (i + 1))
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			if (i != size - 1)
			{
				_putchar(10);
			}
		}
	}
	_putchar(10);
}
