#include "monty.h"
/**
 * push - add an element to the stack
 * @h: double pointer to head to stack
 * @line: arguments of line
 * @line_number: number lines of file
 */
void push(stack_t **h, char *line, unsigned int line_number)
{
	char *start_n;
	stack_t *node;

	start_n = reach_number(line);
	if (start_n == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		free(line);
		free(*h);
		*h = NULL;
		exit(EXIT_FAILURE);
	}

	node = add_node(h, atoi(start_n));
	free(line);
	if (node == NULL)
	{
		puts("Error: malloc failed");
		free_stack(*h);
		exit(EXIT_FAILURE);
	}
}
