#include "monty.h"

/**
 * mul_failure- opcode_mul error
 * @stack: Pointer to node
 * @line_number: Error number
 *
 * Return: nothing
 */
void mul_failure(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
