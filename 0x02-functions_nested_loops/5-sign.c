#include "main.h"
/**
 * print_sign - check for arithmetic symbols
 * @n : letter being tested
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
		putchar(43);
	else if (n == 0)
		return (0);
		putchar(48);
	else
		return (-1);
		putchar(45);
}
