#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* free_list - free a list_t list
* @head: first parameter
* Return: Nothing
*/

void free_list(list_t *head)
{
	list_t *node;

	if (head == NULL)
	{
		free(head);
	}
	while (head)
	{
		node = head->next
		free(head->str);
		free(head);
		head = node
	}
}
