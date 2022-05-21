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
		{NULL, NULL}
	};
	int i;	
	char *start_c;
		
	start_c = strtok(line, " \n\t");
	printf("Error");
	printf("%s", start_c);
	if (start_c == NULL)
	{
		free(line);
		return;
	}
	if (strcmp(start_c, "push") == 0)
	{
		push(h, line, line_number);
		return;
	}
	else
	{
		for (i = 0; instr[i].opcode != NULL; i++)
		{
			
			if (strcmp(start_c, instr[i].opcode) == 0)
			{
				
				free(line);
				instr[i].f(h, line_number);
				return;
			}
		}
	}
	fprintf(stderr,"L%d: unknown instruction %s\n", line_number, start_c);
	free(line);
	free_stack(*h);
	*h = NULL;
	exit(EXIT_FAILURE);
}
