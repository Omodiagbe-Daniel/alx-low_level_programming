#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* list_len - returns number of elements
* @h: first parameter
* Return: returns number of node
*/

size_t list_len(const list_t *h)
{
	unsigned i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
