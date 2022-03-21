#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in the reverse form
 * @s: Parameter is of type char
 * Return: Always void
 */

void print_rev(char *s)
{

	while (*s != '\0')
	{
		_putchar(*s);
		s--;
	}
	_putchar(10);
}
