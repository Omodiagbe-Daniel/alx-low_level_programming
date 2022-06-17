#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* pop_listint - deletes the head node of a listint_t linked list
* @head: first parameter
* Return: head node data n
*/

int pop_listint(listint_t **head)
{
	listint_t *del;
	int i;

	if (((*head) == NULL) || (head == NULL))
	{
		return (0);
	}
	del = *head;
	*head = (*head)->next;
	i = del->n;
	free(del);
	return (i);
}
