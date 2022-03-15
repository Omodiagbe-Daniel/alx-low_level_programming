#include "main.h"
/**
 * _islower (int c) - printing 1 for lower characters
 * Description: printing lowercase alphabet
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	char c;
	
	if (c >= 'a' && c <= 'z')
		_putchar('1');
	else
		_putchar('0');
	return (0);
}
