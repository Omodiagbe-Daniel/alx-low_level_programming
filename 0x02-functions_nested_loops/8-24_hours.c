#include "main.h"

/**
 *jack_bauer -printing minutes and hours in a day
 *void - takes no argument
 *Return: Always 0 (Success)
 */
void jack_bauer(void)
{
int hour;
int min;

for (hour = 0; hour < 24; hour++)
{
for (min = 0; min < 60; min++)
{
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((min / 10) + '0');
_putchar((min % 10) + '0');
_putchar('\n');
}
}
}

