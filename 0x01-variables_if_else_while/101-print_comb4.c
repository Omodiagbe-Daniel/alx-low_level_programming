#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int i, j;

	for (n = 48; n <= 57; n++)
	{
		for (i = 49; i <= 57; i++)
		{
			for (j = 50; j <= 57; j++)
			{
				if (i > n && j > i)
				{
					putchar(n);
					putchar(i);
					putchar(j);
					if (n < 55)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar(10);
	return (0);
}
