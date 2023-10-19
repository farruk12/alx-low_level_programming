#include "lists.h"

/**
 *
 *
 */
void free_list(list_t *head)
{
	list_t *c;
	list_t *p;

	while (c != NULL)
	{
		p = c;
		c = c->next;
		free(p->str);
		free(p);
	}
}
