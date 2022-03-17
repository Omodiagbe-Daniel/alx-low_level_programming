#include <stdio.h>
#include "main.h"
/**
 * print_to_98 : printing out natural numbers of n to 98
 * @n : parameter is of type int
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
int r;
scanf("%d\n", &n);
for (r = n; r <= 98; r++)
{
_putchar(r);
_putchar(32);
}
_putchar(10);
}
