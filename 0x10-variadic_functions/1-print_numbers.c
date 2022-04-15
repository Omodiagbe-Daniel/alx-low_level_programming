#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
* print_numbers - print numbers
* @separator: separates the numbers
* @n: numbers of integers passed
* Return: Nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	unsigned int num;
	va_list ptr;

	va_start(ptr, n);
	if ((separator != NULL) && n)
	{
		while (i < n)
		{
			num = va_arg(ptr, int);
			printf("%d", num);
			if (i < (n - 1))
			{
				putchar(*separator);
				printf("%s", " ");
			}
			i++;
		}
		va_end(ptr);
	}
	printf("\n");
}
