#include "monty.h"
/**
 * add_node - push or enqueue an element at the beginning of the stack
 * @h: pointer to head to stack
 * @n: value to add
 * Return: pointer to new node or NULL
 */
stack_t *add_node(stack_t **h, const int n)
{
	stack_t *new;

	if (!h)
		return (NULL);

	new = malloc(sizeof(stack_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *h;

	if (*h)
		(*h)->prev = new;
	*h = new;
	return (new);
}
