#include "main.h"
#include <math.h>
#include <stdio.h>

/**
* binary_to_uint - converts a binary number to an unsigned int
* @b: points to string 0 and 1
* Return: converted number
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int len = 0;

	if (b == NULL)
	{
		return (0);
	}
	if (b[len] == '\0')
		return (0);

	while ((b[len] == '0') || (b[len] == '1'))
	{
		num <<= 1;
		num += b[len] - '0';
		len++;
	}

	return (num);
}
