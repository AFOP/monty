#include "monty.h"
/**
 * skip_spaces - skip whitespaces
 * @s: a string
 *
 * Return: pointer to where is the first non space char or NULL
 */
char *skip_spaces(char *s)
{
	char *copy, *token;

	if (!s)
		return (NULL);

	while (*s && *s == ' ')
		++s;
  
	if ((*s) == '\t' || (*s) == '\n' || (*s) == '\0')
	{ 
		return (NULL);
	}                           
	copy = strdup(s);                    
	token = strtok(copy, " ");
	return (token);
}

/**
 * reach_number - get the first number in a string
 * @s:
 * the string should contain only spaces and a valid opcode before
 * Return: a pointer to where the number is or NULL
 */
char *reach_number(char *s)
{
	char *num;

	if (!s)
		return (NULL);
	
	num = strtok(s, " ");
	num = strtok(NULL, " ");

	while (*num && (*num < '0' || *num > '9'))
		++num;  

	if ((*num) == '\n' || (*num) == '\0')
	{ 
		return (NULL);
	}
	return (num);
}
