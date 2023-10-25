#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint_end - add a node to begin of a listint element
  * @head: pointer pointer to head node
  * @n: data to add to node
  * Return: NULL if head or malloc return NULL, pointer to nodes added
  *			to beginning of node
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *last_node;

	if (new_node == NULL || head == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	last_node = *head;

	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}

	last_node->next = new_node;

	return (new_node);
}
