#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_listint - frees listint_t list
* @head: first parameter
* Return: Nothing
*/

void free_listint(listint_t *head)
{
	listint_t *free_list;

	if (head)
	{
		while (head)
		{
			free_list = head->next;
			free(head);
			head = free_list;
		}
	}
}
