#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) linked list
 * @head: a structure pointer
 * Return: function that returns a sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *p;

	p = head;
	if (p == NULL)
		return (0);
	while (p != NULL)
	{
		sum += p->n;
		p = p->next;
	}
	return (sum);
}


