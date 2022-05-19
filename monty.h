#ifndef monty_h
#define monty_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
void execute(stack_t **h, char *line, unsigned int line_number);
void push(stack_t **h, char *line, unsigned int line_number);
stack_t *add_node(stack_t **h, const int n);
void pall(stack_t **head, unsigned int l);
char *skip_spaces(char *s);
char *reach_number(char *s);
void free_stack(stack_t *h);

#endif