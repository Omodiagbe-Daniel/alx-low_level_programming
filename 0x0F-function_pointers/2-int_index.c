#include "function_pointers.h"

/**
* int_index - searches for an integer
* @array: arrray of integers
* @size: size of array
* @cmp: function pointer to an integer
* Return:Always 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if ((cmp)(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	if (!(cmp && array))
	{
		return (-1);
	}
	return (0);
}