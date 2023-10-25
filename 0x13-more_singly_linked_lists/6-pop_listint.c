#include <stdlib.h>
#include "lists.h"


/**
  * pop_listint - delete head node
  * @head: pointer to head node
  * Return: head node data
  */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	temp = *head;
	data = temp->n;

	if (head == NULL || *head == NULL)
		return (0);

	if (temp)
	{
		*head = temp->next;
	}

	free(temp);
	return (data);
}
