#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* delete_nodeint_at_index - deletes a node at an index
* @head: pointer to address of head
* @index: index of node to be deleted
* Return: 1 if it succeeded or -1 if it fails
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *tmp;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
		return (1);
	}
	tmp = *head;
	for (i = 0; i < index - 1; i++)
	{
		tmp = tmp->next;
		if (tmp == NULL && index - i > 0)
		{
			return (-1);
		}
	}
	node = tmp->next;
	tmp->next = node->next;
	free(node);
	return (1);
}
