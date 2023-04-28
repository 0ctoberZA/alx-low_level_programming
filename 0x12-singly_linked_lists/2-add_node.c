#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head of the linked list
 * @str: string to store the list
 *
 * Return:  address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	list_t tchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (tchar = 0; str[tchar]; tchar++)
		;

	new->len = tchar;
	new->next = *head;
	*head = new;

	return (*head);
}
