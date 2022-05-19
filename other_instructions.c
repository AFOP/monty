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
/**
 * pint - prints the value at the top of the stack
 * @head: double pointer to head
 * @l: line number
 */
void pint(stack_t **head, unsigned int l)
{
	stack_t *h;
	(void)l;

	if (!head)
	{
		printf("L%d: can't pint, stack empty", l);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	printf("%d\n", h->n);
}

