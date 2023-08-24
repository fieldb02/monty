#include "monty.h"

/**
 *pop_error - Handles pop error
 *@stack: Pointer head
 *@line_number: Errors found
 */
void pop_error(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}