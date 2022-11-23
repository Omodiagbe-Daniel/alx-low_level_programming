#include "main.h"
#include <stdio.h>

/**
* get_bit - returns the value of a bit at a given index
* @n: parameter 1
* @index: parameter 2
* Return: value of the bit at index index or -1
*/

int get_bit(unsigned long int n, unsigned int index)
{
	int i = 0;
	unsigned int current;
	unsigned int j = 0;

	for (i = 63; i >= 0; i--)
	{
		current = n >> index;
		if (j == index)
		{
			if (current & 1)
			{
				return (1);
			}
			else
			{
				return (0);
			}
		}
		j++;
	}
	return (-1);
}
