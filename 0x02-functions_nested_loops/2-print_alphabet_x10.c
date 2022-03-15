#include "main.h"

/**
 *print_alphabet_x10 - printing lower case alphabets
 *Description: print abc...z 10times
 *
 *Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
char i[26] = "abcdefghijlmnopqrstuvwxyz";
int j = 0;
int h = 0;

while (j < 10)
{
while (h < 26)
{
_putchar(i[h]);
j++;
}
_putchar('\n');
h++;
}
}

