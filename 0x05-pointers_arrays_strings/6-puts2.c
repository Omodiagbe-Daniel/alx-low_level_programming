#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints the first character and increment others by 2
 * @str: parameter is of type char
 * Return: Always void
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar(10);
}
