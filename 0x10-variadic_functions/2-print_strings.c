#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
* print_strings - prints strings followed by a new line
* @separator: string printed between strings
* @n: number of strings passed to the function
* Return: Nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			str = va_arg(ptr, char *);
			if (str == NULL)
			{
				printf("%s", "nil");
				{
					if (i < (n - 1))
					{
						printf("%s ", separator);
					}
				}
			}
			else if (str != NULL)
			{
				printf("%s", str);
				{
					if (i < (n - 1))
					{
						printf("%s ", separator);
					}
				}
			}
		}
	}
	printf("\n");
	va_end(ptr);
}
