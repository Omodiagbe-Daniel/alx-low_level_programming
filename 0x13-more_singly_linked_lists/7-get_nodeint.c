#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
* *get_nodeint_at_index - returns the nth node of a listint_t linked list
* @head: firdt node in the list
* @index: indext of the node
* Return: nth node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i;

	if (!head)
	{
		return (NULL);
	}
	for (i = 0; node; i++)
	{
		if (i == index)
		{
			return (node);
		}
		node = node->next;
	}
	return (NULL);
}
