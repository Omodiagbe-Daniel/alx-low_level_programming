#include "lists.h"

/**
* *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
* @head: first node
* @index: index of the node
* Return: nth node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	node = malloc(sizeof(dlistint_t));
	if (!node)
	{
		return (NULL);
	}
	while (head != NULL)
	{
		if (count == index)
		{
			node = head;
		}
		head = head->next;
		count++;
	}
	return (node);
}
