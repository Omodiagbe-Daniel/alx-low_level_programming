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
	listint_t *node;
	unsigned int count;

	if (head == NULL)
	{
		return (NULL);
	}
	node = head;
        for (count = 0; node; count++)
	{
		if (count == index)
		{
			return (node);
		}
		node = node->next;
	}
	return (NULL);
}
