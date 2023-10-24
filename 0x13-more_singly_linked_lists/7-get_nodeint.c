#include "lists.h"

/**
 * get_nodeint_at_index -  function that returns the nth node of a linked list
 * @head: double pointer to a structure
 * @index: our value
 * Return: nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i = 0;
	listint_t *p;

	if (head == NULL)
		return (NULL);
	p = head;
	while (p != NULL)
	{
		if (i == index)
			return (p);
		p = p->next;
		i++;
	}
	return (NULL);
}

