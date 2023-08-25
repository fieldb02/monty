#include "monty.h"

/**
 * pchar_failure - Handles opcode_pchar errors
 * @stack: Pointer to node
 * @line_number: Line No where error occured
 *
 */
void pchar_failure(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
