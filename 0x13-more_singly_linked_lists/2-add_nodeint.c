#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
* *add_nodeint - adds a new node
* @head: first parameter
* @n: second parameter
* Return: address of thr new element
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (!node)
	{
		return (NULL);
	}
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
