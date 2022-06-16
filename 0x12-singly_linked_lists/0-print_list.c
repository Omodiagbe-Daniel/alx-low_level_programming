#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_list - prints all elements of a list
* @h: first parameter
* Return: number of nodes
*/

size_t print_list(const list_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
