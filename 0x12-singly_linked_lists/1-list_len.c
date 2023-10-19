#include "lists.h"

/**
 * list_len -  function that returns the length of linked list
 * @h: a pointer to a structure
 * Return: always success
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
