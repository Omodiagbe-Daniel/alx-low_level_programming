#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit (0 - 9)
 * @c: letter being tested
 * Return: int Always 0 (Success)
 */
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
	return (1);
else
	return (0);
}
