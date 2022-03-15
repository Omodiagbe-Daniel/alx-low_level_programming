#include <stdio.h>

/*
 * main.h - header file
 *Description:codes start and ends here
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[7] = "putchar";
	int n;

	for (n = 0; n < 7; n++)
	{
	putchar(alp[n]);
	}
	putchar('\n');
	return (0);
}
