#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: head of list
 *
 * Return: returns the head node’s data (n), 0 linked list empty.
 */
int pop_listint(listint_t **head)
{
	int snode;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	snode = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (snode);
}
