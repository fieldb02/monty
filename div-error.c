#include "monty.h"

/**
 * div_error - Handled div errors
 * @stack: Pointer to node
 * @line_number: Error occuring here
 *
 * Return: nothing
 */
void div_failure(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
