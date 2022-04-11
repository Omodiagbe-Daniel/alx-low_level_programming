#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int i;

	for (n = 48; n <= 57; n++)
	{
		for (i = 49; i <= 57; i++)
		{
			putchar(n);
			putchar(i);
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
