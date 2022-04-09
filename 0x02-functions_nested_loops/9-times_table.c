#include "main.h"
/**
 * times_table - printing 9 times table
 * void : carries no parameter
 * Return: Always 0 (Success)
 */
void times_table(void)
{
int i;
int j;
int n;

for (i = 48; i <= 57; i++)
{
for (j = 48; j <= 57; j++)
{
n = i * j;
_putchar(n);
if (n > 57)
{
_putchar(n / 10 + '0');
_putchar(n % 10 + '0');
}
}
_putchar('\n');
}
}
