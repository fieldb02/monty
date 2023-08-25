#include "monty.h"

/* This file handles malloc and push errors */

/**
 * malloc_failure - Malloc
 * @stack: Pointer to head node
 */
void malloc_failure(stack_t **stack)
{
	fprintf(stderr, "Error: malloc failed \n");
	free_stack(stack);
	exit(EXIT_FAILURE);
}
/**
 * opcode_push_failure - Push
 * @stack: Pointer to Head node
 * @line_number: LineNo, where error is found
 */
void opcode_push_failure(stack_t **stack, unsigned int line_number)
{
	 fprintf(stderr, "L%d: usage: push integer\n", line_number);
	 free_stack(stack);
	 exit(EXIT_FAILURE);
}
