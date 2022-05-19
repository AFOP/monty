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

	if (!head || !*head)
	{
		printf("L%d: can't pint, stack empty\n", l);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	printf("%d\n", h->n);
}
/**
* pop - removes the top element of the stack
* @h: pointer to head to stack
* @l: value of the line
* Return: pointer to new node or NULL
*/
void pop(stack_t **h, unsigned int l)
{
	stack_t *nodo;

	if (!h || !*h)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", l);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	nodo = remove_node(h);
	if (nodo == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", l);
		free_stack(*h);
		free(nodo);
		exit(EXIT_FAILURE);
	}
}
