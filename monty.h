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

/**
 * struct stack_type - variable
 * @n: value of node
 * @file: File to be read
 * @opcode: Tkn parsed
 * @queue: Mode switching (FIFO) - 0 for off, 1 for on
 * Description: Errror handling file
 */
struct stack_type
{
	char *n;
	char *file;
	char *opcode;
	int queue;
} stack_type;


#endif
