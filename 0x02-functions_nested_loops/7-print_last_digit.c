#include "main.h"
/**
 * print_last_digit - check for last digit of a number
 *@n :parameter is of type int
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
int r = n % 10;
_putchar(r);
return (r);
}
