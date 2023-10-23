#include "lists.h"
#include <stdio.h>

/**
  * print_list - prints all elements of a linked list
  * @h: pointer to head node
  * Return: Number of elements in list
  */

size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		char *p = h->str;

		if (p == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, p);

		count++;
		h = h->next; /* Update pointer */
	}

	return (count);
}
