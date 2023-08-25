#include "monty.h"

/**
 * char_failure - Char errors
 * @stack: Pointer to node
 * @line_number: No error found
 */

void char_failure(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pchar,
			value out of range\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
