#include "lists.h"

/**
 * add_nodeint - function adding new node at the beginning
 * @head: pointer to our structure
 * @n: value to be passed to our structure member
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);
	p->n = n;
	p->next = *head;
	*head = p;

	return (p);
}
