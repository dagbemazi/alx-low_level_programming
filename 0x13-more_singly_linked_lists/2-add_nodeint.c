#include "lists.h"
#include <stdlib.h>

/**
  * add_nodeint - add a node to begin of a listint element
  * @head: pointer pointer to head node
  * @n: data to add to node
  * Return: NULL if head or malloc return NULL, pointer to nodes added
  *			to beginning of node
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL || head == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);

	free(new_node);
}
