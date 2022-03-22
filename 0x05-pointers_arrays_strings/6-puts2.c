#include "main.h"
#include <stdio.h>

/**
 * puts2 - function that prints every other character of a string, starting with the first character
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
