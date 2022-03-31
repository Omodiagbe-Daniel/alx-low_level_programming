#include "main.h"

/**
* factorial - factorial n
* @n: parameter to be tested
* Return: recursion
*/

int factorial(int n)

{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (0);
}
return (n * factorial(n - 1));
}
