#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* *add_node_end - adds a new node at the end of list_t
* @head: first parameter
* @str: second parameter
* Return: address of new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	last_node = *head;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
	}
	return (new_node);
}
