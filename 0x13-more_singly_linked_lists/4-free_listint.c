#include "lists.h"

/**
 * free_listint - a function that frees a structure list.
 * @head: function pointer
 * Return: success
 *
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	while (head != NULL)
	{
		p = head;
		head = head->next;
		free(p);
	}
}
