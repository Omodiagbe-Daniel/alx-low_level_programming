#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* sum_listint - sum of all the data (n) of a listint_t linked list
* @head: first node
* Return: sum of all data
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
