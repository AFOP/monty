#include "monty.h"
/**
 * main - firts
 * @argc: len of array
 * @argv: array
 * Return: always 0
 */
int main(int argc, char **argv)
{
	unsigned int line_number = 0;
	char *line_c, *copy, *token;
	size_t size_l;
	ssize_t status = 0;
	stack_t *h = NULL;
	FILE *fp;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (status >= 0)
	{
		line_c = NULL;
		size_l = 0;
		status = getline(&line_c, &size_l, fp);

		if (status > 0)
		{
			line_number++;
			copy = strdup(line_c);
			token = strtok(copy, " \n\t");
			
			if (token == NULL)
				continue;
			execute(&h, token, line_number);
		}
	}
	fclose(fp);
	free_stack(h);
	return (0);
}
