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
		{"pall", pall},
		{NULL, NULL}};
	char *start_c;
	int i;

	start_c = skip_spaces(line);
	if (start_c == NULL)
		return;
	if (strncmp(start_c, "push", strlen("push")) == 0)
	{
		push(h, line, line_number);
		return;
	}
	for (i = 0; instr[i].opcode; i++)
	{
		if (strncmp(start_c, instr[i].opcode, strlen(instr[i].opcode)) == 0)
		{
			free(line);
			(instr[i].f)(h, line_number);
			return;
		}
	}
}
