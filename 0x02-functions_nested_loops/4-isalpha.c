#include "main.h"
/**
 * _islower - check for lower case alphabets and upper  case alphabets
 * @c : letter being tested
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 91))
		return (1);
	else
		return (0);
}
