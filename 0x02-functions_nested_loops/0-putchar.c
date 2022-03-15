#include <stdio.h>
/**
 * main - Entry point
 * Description
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[8] = "_putchar";
	int n;

	for (n = 0; n < 8; n++)
	{
	putchar(alp[n]);
	}
	putchar('\n');
	return (0);
}
