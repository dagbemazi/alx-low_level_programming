#include <stdlib.h>
#include "lists.h"

/**
  * free_listint - free a listint node
  * @head: pointer to head
  */

void free_listint(listint_t *head)
{

	listint_t *current;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
