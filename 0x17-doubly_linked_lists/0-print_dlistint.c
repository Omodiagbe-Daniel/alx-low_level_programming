#include "lists.h"

/**
* print_dlistint - prints all the elements of a dlistint_t list
* @h: first parameter
* Return: integer
*/

size_t print_dlistint(const dlistint_t *h)
{
	unsigned int i = 0;

	if (h)
	{
		while (h !=NULL)
		{
			printf("%d\n", h->n);
			h = h->next;
			i++;
		}
	}
	return (i);
}
