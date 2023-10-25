#include "lists.h"

/**
  * sum_listint - compute sum of all data(n) of a list
  * @head: pointer to head
  * Return: 0 if list is empty else sum
  */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
