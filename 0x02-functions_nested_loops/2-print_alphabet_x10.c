#include "main.h"

/**
 *print_alphabet_x10 - printing lower case alphabets
 *Description: print abc...z 10times
 *
 *Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int j = 0;

	while (j < 10)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar(10);
		j++;
	}
}
