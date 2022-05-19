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
	char *line_c;
	size_t size_l;
	ssize_t status;
	stack_t *h;
	FILE *fp;

	if (argc != 2)
	{
		printf("USAGE: %s file\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	do {
		line_c = NULL;
		size_l = 0;
		status = getline(&line_c, &size_l, fp);
		line_number++;
		if (status > 0)
			execute(&h, line_c, line_number);
		else
			free(line_c);
	} while (status >= 0);
	fclose(fp);
	free_stack(h);
	return (0);
}
