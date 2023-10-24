#include "lists.h"

/**
 * free_listint2 - function that frees linked lists
 * @head: double pointer to structure
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	if (*head == NULL || head == NULL)
		return;

	while (*head != NULL)
	{
		p = *head;
		*head = (*head)->next;
		free(p);
	}

	*head = NULL;
}
