#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_listint_safe - prints out a linked list
* @head: linked list
* Return: the number of nodes in the list
*/

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node, *tmp;
	size_t i = 0;

	if (head == NULL)
	{
		exit(98);
	}

	node = head;
	while (node)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		tmp = node;
		node = node->next;
		i++;
		if (tmp <= node)
		{
			printf("-> [%p] %d\n", (void *)node, node->n);
			break;
		}
	}
	return (i);
}
