#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: double poointer to our structure
 * @idx: positive intger
 * @n: intger
 * Return:  the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p;
	listint_t *ptr;
	size_t i;

	if (head == NULL)
		return (NULL);
	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);
	p->n = n;
	if (idx == 0)
	{
		p->next = *head;
		*head = p;
		return (p);
	}
	ptr = *head;
	for (i = 0; i < idx - 1 && ptr != NULL; i++)
	{
		ptr = ptr->next;
	}
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	p->next = ptr->next;
	ptr->next = p;

	return (p);
}
