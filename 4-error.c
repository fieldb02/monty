#include "monty.h"

/**
 * opcode_char_failure - chars
 * @stack: Pointer to head node
 * @line_number: LineNo, where error is found
 */

void opcode_char_failure(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
/**
 * opcode_sub_failure - sub
 * @stack: Pointer to head node
 * @line_number: LineNo, where error is found
 */
void opcode_sub_failure(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
