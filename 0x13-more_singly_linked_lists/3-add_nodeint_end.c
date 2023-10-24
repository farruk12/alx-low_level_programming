#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a linked list
 * @head: double ponter to our structure
 * @n: our value
 * Return: address of new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p, *a;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);

	p->n = n;
	p->next = NULL;
	if (*head == NULL)
		*head = p;
	else
	{
		a = *head;
		while (a->next != NULL)
		{
			a = a->next;
		}
		a->next = p;
	}
	return (p);
}
