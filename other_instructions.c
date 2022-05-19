#include "monty.h"
/**
 * pall - print all the elements as numbers
 * @head: double pointer to head
 * @l: line number
 */
void pall(stack_t **head, unsigned int l)
{
	stack_t *h;
	(void)l;

	if (!head)
		return;
	h = *head;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
