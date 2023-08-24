#include "monty.h"

/**
 *add_failure - Add error handling
 *@stack: Pointer to node
 *@line_number: Errors found
 */
void add_failure(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't add, stack too short \n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
