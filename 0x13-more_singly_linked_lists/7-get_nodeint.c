#include "lists.h"

/**
  * get_nodeint_at_index - return nth node of a list
  * @head: head node pointer
  * @index: index of node starting at 0
  * Return: NULL if node doesn't exist, else the nth node
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int loop = 0;

	if (head == NULL || index < loop)
		return (0);

	for (temp = head; temp != NULL; temp = temp->next)
	{
		if (index == loop)
			return (temp);

		loop++;
	}

	return (0);
}
