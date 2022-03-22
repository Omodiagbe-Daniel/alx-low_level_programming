#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints the first character and increment others by 2
 * @str: parameter is of type char
 * Return: Always void
 */

void puts2(char *str)
{
	int i, j = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	while (j < i)
	{
		_putchar(str[j]);
		j = j + 2;
	}
	_putchar(10);
}
