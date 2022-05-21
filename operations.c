#include "monty.h"
/**
* add - add a node to the top of the stack
* @h: pointer to head to stack
* @l: value of the line
*/
void add(stack_t **h, unsigned int l)
{
	stack_t *temp;
	int sum;

	if (!h || !*h)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", l);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}

	sum = (*h)->n;
	temp = *h;

	if ((*h)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", l);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}

	(*h) = (*h)->next;
	(*h)->n += sum;
	temp->next = NULL;
	(*h)->prev = NULL;
	free(temp);
}
/**
* sub - subtracts the top element of the stack from the second top element
* @h: pointer to head to stack
* @l: value of the line
*/
void sub(stack_t **h, unsigned int l)
{
	stack_t *temp;
	int res;

	if (!h || !*h)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", l);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}

	res = (*h)->n;
	temp = *h;

	if ((*h)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", l);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}

	(*h) = (*h)->next;
	(*h)->n -= res;
	temp->next = NULL;
	(*h)->prev = NULL;
	free(temp);
}
/**
* mod - divides the second top element of the stack by the top element
* @h: pointer to head to stack
* @l: value of the line
*/
void divi(stack_t **h, unsigned int l)
{
	stack_t *temp;
	int mod;

	if (!h || !*h)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", l);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}

	if ((*h)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", l);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}

	mod = (*h)->n;
	temp = *h;

	if ((*h)->next == NULL)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", l);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	(*h) = (*h)->next;
	(*h)->n /= mod;
	temp->next = NULL;
	(*h)->prev = NULL;
	free(temp);
}
/**
* mul - muntiplis the second top element of the stack by the top element
* @h: pointer to head to stack
* @l: value of the line
*/
void mul(stack_t **h, unsigned int l)
{
	stack_t *temp;
	int mul;

	if (!h || !*h)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", l);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}

	mul = (*h)->n;
	temp = *h;

	if ((*h)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", l);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	(*h) = (*h)->next;
	(*h)->n *= mul;
	temp->next = NULL;
	(*h)->prev = NULL;
	free(temp);
}
void mod(stack_t **h, unsigned int l)
{
	stack_t *temp;
	int mod;

	if (!h || !*h)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", l);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}

	if ((*h)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", l);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}

	mod = (*h)->n;
	temp = *h;

	if ((*h)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", l);
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
	(*h) = (*h)->next;
	(*h)->n %= mod;
	temp->next = NULL;
	(*h)->prev = NULL;
	free(temp);
}

