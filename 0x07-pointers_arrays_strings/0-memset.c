#include "main.h"

/**
* *_memset - fill memory with constant byte
* @s: first character
* @b: second parameter
* @n: third parameter
* Return: pointer to s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

