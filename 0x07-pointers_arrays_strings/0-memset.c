#include "main.h"

/**
* *_memset -  functions that fills memory with a constant byte
* @s: pointer that points to character
* @b: parameter of type char
* @n: unsigned integer
* Return: string
*/

char *_memset(char *s, char b, unsigned int n)
{
while ((*s != '\0') && (n  > 0))
{
*s = b;
s++;
}
return (s);
}
