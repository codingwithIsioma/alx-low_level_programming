#include "lists.h"

/**
 * pop_listint - Deletes the head node of a lsitint_t list
 * @head: A pointer to the address of the head of the list
 * Return: The head node's data (n) or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
