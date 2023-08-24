#include "monty.h"

/**
 *opcode_failure - Invalid error
 *@stack: Pointer to node
 *@line_number: Error found
 */
void opcode_failure(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: unknown instruction %s\n",
		line_number, stack_type.opcode);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
