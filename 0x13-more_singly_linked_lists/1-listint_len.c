#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
* listint_len - returns the number of elements
* @h: first parameter
* Return: number of nodes
*/

size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	if (h)
	{
		while (h)
		{
			h = h->next;
			i++;
		}
	}
	return (i);
}
