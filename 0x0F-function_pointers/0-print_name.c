#include "function_pointers.h"

/**
* print_name - function that prints name
* @name: first parameter
* @f: function pointer
* Return: Nothing
*/

void print_name(char *name, void (*f)(char *))
{
(*f)(name);
}
