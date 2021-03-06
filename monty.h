#ifndef monty_h
#define monty_h
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DELIMS " \n\t"
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/*in execute.c*/
void execute(stack_t **h, char *line, unsigned int line_number);
/*in free_stack.c*/
void free_stack(stack_t *h);
/*in functions_linked_list.c*/
stack_t *add_node(stack_t **h, const int n);
stack_t *remove_node(stack_t **h);
/*in operations.c*/
void add(stack_t **h, unsigned int l);
void sub(stack_t **h, unsigned int l);
void divi(stack_t **h, unsigned int l);
void mul(stack_t **h, unsigned int l);
void mod(stack_t **h, unsigned int l);
/*in other_instructions.c*/
void pall(stack_t **head, unsigned int l);
void pint(stack_t **head, unsigned int l);
void pop(stack_t **h, unsigned int l);
void swap(stack_t **h, unsigned int l);
/*in instructions.c*/
void pchar(stack_t **head, unsigned int l);
void pstr(stack_t **head, unsigned int l);
void rotl(stack_t **head, unsigned int l);
/*in push and nop.c*/
void push(stack_t **h, char *line, unsigned int line_number);
void nop(stack_t **h, unsigned int l);
/*in tools.c*/
char *skip_spaces(char *s);
char *reach_number(char *s);
#endif
