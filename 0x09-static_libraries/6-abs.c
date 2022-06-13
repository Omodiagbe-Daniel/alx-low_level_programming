#include "main.h"
/**
 * _abs - check for absolute value
 * @n : letter being tested
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
if (n > 0)
{
return (n);
}
else if (n == 0)
{
return (0);
}
else
{
return (-1 * n);
}
}
