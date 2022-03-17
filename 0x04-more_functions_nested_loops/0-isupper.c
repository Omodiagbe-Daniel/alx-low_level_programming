#include "main.h"
#include <std.io>

/**
 * _isupper - checks for upper case alphabets
 * @c: letter being tested
 * Return: int Always 0 (Success)
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
	return (1);
else
	return (0);
}
