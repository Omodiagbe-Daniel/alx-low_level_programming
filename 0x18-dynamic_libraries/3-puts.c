#include "main.h"
#include <stdio.h>

/**
 * _puts - printing a string
 * @str: parameter is of type char
 * Return: Always void
 */

void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
