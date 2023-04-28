#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head of linked list
 * @str: string to store linked list
 *
 * Return: address of the new head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t tchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (tchar = 0; str[tchar]; tchar++)
		;

	new->len = tchar;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);
}
