#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *insert_nodeint_at_index - inserts a new node at a given position
* @head: pointer to linked list
* @idx: index of the list
* @n: data
* Return: address of the new node
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *tmp;
	unsigned int i;

	if (*head == NULL && idx != 0)
	{
		return (NULL);
	}
	node = malloc(sizeof(listint_t));
	if (!node)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	tmp = *head;
	for (i = 0; i < idx - 1; i++)
	{
		tmp = tmp->next;
		if (tmp == NULL && idx - i > 0)
		{
			free(node);
			return (NULL);
		}
	}
	node->next = tmp->next;
	tmp->next = node;
	return (node);
}
