#include "monty.h"
/**
* free_stack - free a node
* @h: a pointer to a head
*/
void free_stack(stack_t *h)
{
	stack_t *tmp;

	while (h != NULL)
	{
		tmp = h;
		h = h->next;
		free(tmp);
	}
}
