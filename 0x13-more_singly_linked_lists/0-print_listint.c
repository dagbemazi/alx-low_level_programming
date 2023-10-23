#include "lists.h"
#include <stdio.h>

/**
  * print_listint -  prints all elements in a listint_t list
  * @h: head node
  * Return: number of nodes
  */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);

		count++;
		h = h->next;
	}

	return (count);
}
