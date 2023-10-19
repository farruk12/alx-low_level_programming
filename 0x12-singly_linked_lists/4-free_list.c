#include "lists.h"

/**
 * free_ list - function to free
 * @head: pointer
 * Return: always success
 *
 */
void free_list(list_t *head)
{
	list_t *c = head;
	list_t *p;

	while (c != NULL)
	{
		p = c;
		c = c->next;
		free(p->str);
		free(p);
	}
}
