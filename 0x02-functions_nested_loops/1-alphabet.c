#include "main.h"

/**
 *  program begins and ends here
 *  Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alp[26] = "abcdefghijklmnopqrstuwxyz";
	int i;

	for (i = 0; i < 26; i++)
		_putchar(alp[i]);
	_putchar('\n');
}
