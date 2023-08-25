#include "monty.h"

/**
 * sub_failure- Checks for error at opcode_sub
 * @stack: Pointer to node
 * @line_number: No error occured
 */
void sub_failure(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
