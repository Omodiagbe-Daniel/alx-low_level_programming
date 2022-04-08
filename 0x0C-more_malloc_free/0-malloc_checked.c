#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *malloc_checked - allocates memory using malloc
* @b: parameter being tested
* Return: returns a pointer
*/

void *malloc_checked(unsigned int b)
{
void *p;

p = malloc(b);
if (p == NULL)
{
_putchar(98 / 10 + '0');
_putchar(98 % 10 + '0');
}
return (p);
}
