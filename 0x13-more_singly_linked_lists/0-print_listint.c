#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
* print_listint - prints all the elements of a listint_t list
* @h; first parameter
* Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	if (h)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			i++;
		}
	}
	return (i);
}
