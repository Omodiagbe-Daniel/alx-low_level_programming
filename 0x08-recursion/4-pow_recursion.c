#include "main.h"

/**
* _pow_recursion - returns the value of number raised to another number
* @x: first integer being tested
* @y: second integer being tested
* Return: recursion
*/

int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
return (x * _pow_recursion(x, (y - 1)));
}
