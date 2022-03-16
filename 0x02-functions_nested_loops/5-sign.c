#include "main.h"
/**
 * print_sign - check for arithmetic symbols
 * @n : letter being tested
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
if (n > 0)
{
putchar(43);
return (1);
}
else if (n == 0)
{
putchar(48);
return (0);
}
else
{
putchar(45);
return (-1);
}
}
