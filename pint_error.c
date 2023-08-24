#include "monty.h"

/**
 *p_error - Error for pint
 *@stack: Pointer for stack
 *@line_number: line for error found
 *
 */

void p_error(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
