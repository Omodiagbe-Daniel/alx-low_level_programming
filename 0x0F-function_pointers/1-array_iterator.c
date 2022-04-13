#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator - executes a function given as a parameter
* @array: pointer to integer
* @size: sizeof array
* @action: function pointers
* Return: Nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

for (i = 0; i < size; i++)
{
(action)(array[i]);
}
}

