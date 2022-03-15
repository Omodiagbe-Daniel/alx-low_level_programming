#include "main.h"

/**
 *print_alphabet - printing lower case alphabets
 *Description: print abc...z
 *
 *Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
		_putchar(alp[i]);
	_putchar('\n');
}
