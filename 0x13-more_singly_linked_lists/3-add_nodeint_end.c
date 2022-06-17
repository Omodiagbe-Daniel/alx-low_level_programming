#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
* *add_nodeint_end - adds a new node at the end
* @head: first parameter
* @n: second parameter
* Return: address of thr new element
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *last;

	node = malloc(sizeof(listint_t));
	if (!node)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = node;
	}
	return (node);
}
