#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index
 * of a listint_t list
 * @head: A pointer to the address of the head of the list
 * @index: The index of the node to be deleted
 *
 * Return: On success 1 or -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *cpy = *head;
	unsigned int node;

	if (cpy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(cpy);
		return (1);
	}

	for (node = 0; node < (index - 1); node++)
	{
		if (cpy->next == NULL)
			return (-1);

		cpy = cpy->next;
	}

	tmp = cpy->next;
	cpy->next = tmp->next;
	free(tmp);
	return (1);
}
