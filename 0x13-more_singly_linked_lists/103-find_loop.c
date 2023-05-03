#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of linked list
 *
 * Return: address of node where loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *cat, *mouse;

	cat = mouse = head;

	while (cat != NULL && mouse != NULL)
	{
		cat = cat->next;
		mouse = mouse->next->next;

		if (cat == mouse)
		{
			cat = mouse;
			while (cat != mouse)
			{
				cat = cat->next;
				mouse = mouse->next;
			}
			return (cat);
		}
	}
	return (NULL);
}
