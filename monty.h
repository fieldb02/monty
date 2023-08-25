#ifndef __MONTY_HEADER__
#define __MONTY_HEADER__

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

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

void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack)i; 

/**
 * struct stack_val - variable
 * @n: value of node
 * @file: File to be read
 * @opcode: Tkn parsed
 * @qu: Mode switching (FIFO) - 0 for off, 1 for on
 * Description: Errror handling file
 */
struct stack_type
{
	char *n;
	char *file;
	char *opcode;
	int queue;
} stack_val;

void add_failure(stack_t **stack, unsigned int line_number);
void div_failure(stack_t **stack, unsigned int line_number);
void file_failure(void);
void input_failure(void);
void parse_bytecode_file(FILE *file_ptr);
int main(int argc, char **argv);
void malloc_failure(stack_t **stack);
void mod_failure(stack_t **stack, unsigned int line_number);
void mul_failure(stack_t **stack, unsigned int line_number);
void (*op_func(char *s))(stack_t **, unsigned int);
void opcode_failure(stack_t **stack, unsigned int line_number);
void pint_failure(stack_t **stack, unsigned int line_number);
void pop_failure(stack_t **stack, unsigned int line_number);
void push_failure(stack_t **stack, unsigned int line_number);
void free_stack(stack_t **stack);
void swap_failure(stack_t **stack, unsigned int line_number);
void zero_failure(stack_t **stack, unsigned int line_number);
void opcode_pall(stack_t **stack, unsigned int line_number);
void opcode_push(stack_t **head, unsigned int line_number);
void push_value(stack_t **head, int value);
#endif
