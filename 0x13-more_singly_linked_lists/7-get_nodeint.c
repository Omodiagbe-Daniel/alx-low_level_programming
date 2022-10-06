#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *get_nodeint_at_index - returns the nth node of a listint_t linked list
* @head: firdt node in the list
* @index: indext of the node
* Return: nth node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int i;

	if (head == NULL)
	{
		return (NULL);
	}
	while (index + 1 > 0)
	{
		node = head;
		head = head->next;
		--index;
	}
	if (!node)
	{
		return (NULL);
	}
	return (node);
}
