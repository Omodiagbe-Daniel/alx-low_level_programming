#include "main.h"
#include <stdio.h>

/**
 * mul - multiplies two integers
 * @a: integer 1
 * @b: integer 2
 * Return: int Always 0 (Success)
 */
int mul(int a, int b)
{
int c;

scanf("%d\n", &a);
scanf("%d\n", &b);
c = a * b;
_putchar(c);
}
