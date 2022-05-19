#include "monty.h"
/**
 * skip_spaces - skip whitespaces
 * @s: a string
 *
 * Return: pointer to where is the first non space char or NULL
 */
char *skip_spaces(char *s)
{
	if (!s)
		return (NULL);

	while (*s && *s == ' ')
		++s;
	if (*s == '\0') /*empty string*/
		return (NULL);

	return (s);
}

/**
 * reach_number - get the first number in a string
 * @s:
 * the string should contain only spaces and a valid opcode before
 * Return: a pointer to where the number is or NULL
 */
char *reach_number(char *s)
{
	if (!s)
		return (NULL);

	while (*s && (*s < '0' || *s > '9'))
		++s;

	if (*s == '\0')
		return (NULL);
	return (s);
}