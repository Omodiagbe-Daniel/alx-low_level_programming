#include "main.h"

/**
 *print_alphabet_x10 - printing lower case alphabets
 *Description: print abc...z 10times
 *
 *Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0, j;

	while (i < 26)
		i++;

		j = 0;
		while (j < 10)
			_putchar(alp[i]);
			j++;


	_putchar('\n');
}
