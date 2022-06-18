#include "lists.h"

/**
* sum_dlistint - returns sum
* @head: first parameter
* Return: sum of data(n)
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
