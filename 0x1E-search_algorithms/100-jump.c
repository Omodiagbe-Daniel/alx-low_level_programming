#include "search_algos.h"
#include <math.h>

/**
* linear_search1 - searches for values in an array of integers
* @array: pointer to the first element
* @size: number of element in array
* @index: beginning index of the array
* @value: value to search for
* Return: index of value or -1 if value not found
*/

int linear_search1(int *array, size_t size, size_t index, int value)
{
	size_t i;

	if (!array || array == NULL || size == 0)
	{
		return (-1);
	}
	for (i = index; i < size + 1; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}

/**
* jump_search - searches for values in a sorted array of integers
* @array: pointer to the first element
* @size: number of element in array
* @value: value to search for
* Return: index of value or -1 if value not found
*/

int jump_search(int *array, size_t size, int value)
{
	size_t i, step, search, next, prev = 0;

	if (!array || array == NULL)
	{
		return (-1);
	}
	next = size;
	step = sqrt(size);
	for (i = prev; i < next; i = i + step)
	{
		if (array[i] >= value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
i - step, i);
			search = linear_search1(array, i, i - step, value);
			return (search);
		}
		else if (array[i] < value)
		{
			printf("Value checked array [%ld] = [%d]\n", i, array[i]);
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
i - step, i);
	search = linear_search1(array, size - 1, i - step, value);
	return (search);
}
