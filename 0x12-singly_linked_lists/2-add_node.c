#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *add_node - adds a new node
* @head: first parameter
* @str: second parameter
* Return: address of new element
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		return (NULL);
	}
	else
	{
		new_node->str = strdup(str);
		new_node->len = strlen(str);
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
