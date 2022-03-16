#include "main.h"
/**
 * print_last_digit - check for last digit of a number
 * @n : letter being tested
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
int r = n % 10;
if (n > 0)
{
_putchar(r + '0');
return (r);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
r = -1 * r;
_putchar(r + '0');
return (r);
}
}
