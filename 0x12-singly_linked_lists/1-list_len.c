#include "lists.h"

/**
  * list_len - counts number of elements in a linked list
  * @h: pointer to head node
  * Return: Number of elements in list
  */

size_t list_len(const list_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;
		h = h->next; /* Update pointer */
	}

	return (count);
}
