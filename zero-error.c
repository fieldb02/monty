#include "monty.h"

/**
 * zero_failure - zero error for opcode_div
 * @stack: Pointer to node
 * @line_number: Error found in line
 *
 */
void zero_failure(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: division by zero\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
