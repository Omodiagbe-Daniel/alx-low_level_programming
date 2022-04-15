#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* sum_them_all - returns sum of its parameters
* @n: constant unsigned integer
* Return: Always 0
*/

int sum_them_all(const unsigned int n, ...)
{
        int sum = 0;
        unsigned int i;

        va_list ptr;

        va_start(ptr, n);

        if (n == 0)
        {
                return (0);
        }
        for (i = 0; i < n; i++)
        {
                sum += va_arg(ptr, int);
        }
        va_end(ptr);
        return (sum);
}
