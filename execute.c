#include "monty.h"
/**
 * execute - match whit opcode
 * @h: double pointer to head stack
 * @line: arguments of line
 * @line_number: number lines of file
 */
void execute(stack_t **h, char *line, unsigned int line_number)
{
	instruction_t instr[] = {
		{"pall", pall}, {"pint", pint},
		{"pop", pop}, {"swap", swap},
		{"add", add}, {"nop", nop},
		{"sub", sub}, {"div", divi},
		{"mul", mul}, {"mod", mod},
		{NULL, NULL}
	};
	int i;

	if (strcmp(line, "push") == 0)
	{
		push(h, line, line_number);
		return;
	}
	else
	{
		for (i = 0; instr[i].opcode != NULL; i++)
		{
			if (strcmp(line, instr[i].opcode) == 0)
			{
				instr[i].f(h, line_number);
				return;
			}
		}
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, line);
	free_stack(*h);
	*h = NULL;
	exit(EXIT_FAILURE);
}
