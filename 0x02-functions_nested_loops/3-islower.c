#include "main.h"
/**
 * _islower (int c) - printing 1 for lower characters
 * Description: printing lowercase alphabet
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	
	if (c >= 97 && c <= 122)
		return(1);
	else
		return (0);
}
