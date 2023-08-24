#include "monty.h"

/**
 *swap_failure - Error for swap
 *@stack: Pointer to node
 *@line_number: Errors found
 */
void swap_failure(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't swap, stack to short\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
