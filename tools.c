#include "monty.h"
/**
 * reach_number - get the first number in a string
 * @s:
 * the string should contain only spaces and a valid opcode before
 * Return: a pointer to where the number is or NULL
 */
char *reach_number(char *s)
{
	char *num, *copy;

	if (!s)
		return (NULL);
	copy = strtok(NULL, DELIMS);

	if (copy == NULL)
		return (NULL);

	num =  strdup(copy);
	while (*num && !(*num < '0' || *num > '9'))
		num++;

	if (*num != '\n' && *num != '\0' && *num != '-')
	{
		free(num);
		return (NULL);
	}
	return (copy);
}
