#include "lists.h"

/**
* dlistint_len - returns the number of elements in a linked list
* @h: first parameter
* Return: integer
*/

size_t dlistint_len(const dlistint_t *h)
{
	unsigned int i = 0;

	if (h)
	{
		while (h != NULL)
		{
			h = h->next;
			i++;
		}
	}
	return (i);
}
