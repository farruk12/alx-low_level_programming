#include "lists.h"

/**
 * pop_listint - function that delete  a headnode
 * @head: double pointer
 * Return:  the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	int num;
	listint_t *p;

	if (head == NULL || *head == NULL)
		return (0);

	p = *head;
	*head = p->next;
	num = p->n;
	free(p);

	return (num);
}
