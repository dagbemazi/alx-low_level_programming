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

	if (head == NULL || *head == NULL || new_node == NULL || n < 0 || idx)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 1)
	{
		new_node->next = *head;
		*head = new_node;

		return (new_node);
	}

	temp = *head;

	for (i = 0; i < idx - 2; i++)
		temp = temp->next;

	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
