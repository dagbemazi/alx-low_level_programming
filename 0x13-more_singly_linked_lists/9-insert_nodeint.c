#include <stdlib.h>
#include "lists.h"

/**
  * insert_nodeint_at_index - insert node at nth position
  * @head: pointer to node
  * @idx: position to insert, index starts at 0
  * @n: data to insert
  * Return: address of new node or NULL on failure
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}

	temp = *head;

	for (i = 0; i < idx - 1 && temp != NULL; i++)
		temp = temp->next;

	if (i < idx - 1 || temp == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
