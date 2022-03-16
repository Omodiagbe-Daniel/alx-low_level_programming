#include "main.h"
/**
 * times_table - printing 9 times table
 * void : carries no parameter
 * Return: Always 0 (Success)
 */
void times_table(void)
int i;
int j;

{
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
_putchar(i * j);
}
}
}
