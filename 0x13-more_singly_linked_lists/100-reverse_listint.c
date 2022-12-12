#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *reverse_listint - reverses a linked list
* @head: holds the address of linked list
* Return: pointer to the first node of the linked list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node, *prev;

	if (*head == NULL)
	{
		return (NULL);
	}
	node = NULL;
	prev = NULL;
	while (*head)
	{
		node = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = node;
	}
	*head = prev;

	return (*head);
}
