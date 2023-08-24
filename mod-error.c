#include "monty.h"

/**
 * mod_failure - Opcode_mod error handling
 * @stack: Pointer to node
 * @line_number: Error No
 *
 */
void mod_failure(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
