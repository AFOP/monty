#include "monty.h"
/**
 * pchar - prints the char at the top of the stack
 * @head: double pointer to head
 * @l: line number
 */
void pchar(stack_t **head, unsigned int l)
{
	(void)l;

	if (!head || !*head)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", l);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if ((*head)->n < 0 || (*head)->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", l);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*head)->n);
}
/**
 * pstr - prints the string starting at the top of the stack
 * @head: double pointer to head
 * @l: line number
 */
void pstr(stack_t **head, unsigned int l)
{
	stack_t *temp;
	(void)l;

	temp = *head;

	while (temp != NULL)
	{
		if (temp->n == 0)
			break;
		if (temp->n <= 32 || temp->n > 126)
			break;
		printf("%c", temp->n);
		temp = temp->next;
	}
	printf("\n");
}
/**
 * rotl - rotates the stack to the top
 * @head: double pointer to head
 * @l: line number
 */
void rotl(stack_t **head, unsigned int l)
{
	stack_t *top;
	stack_t *tail;
	(void)l;

	if (!head || !*head)
		return;
	
	if ((*head)->next == NULL)
		return;

	top = tail = (*head)->next;

	while (tail->next != NULL)
		tail = tail->next;

	tail->next = (*head);
	top->prev = NULL;
	(*head)->prev = tail;
	(*head)->next = NULL;
	(*head) = top;
}
