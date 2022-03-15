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
		print('1');
	else
		print('0');
	return (0);
}
