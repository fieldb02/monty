#include "monty.h"

/**
 * push_error - Push error function
 * @stack: Pointer to head node
 * @line_number: Push error ocured
 */
void push_error(stack_t **stack, unsigned int line_number)
{
	 fprintf(stderr, "L%d: usage: push integer\n", line_number);
	 free_stack(stack);
	 exit(EXIT_FAILURE);
}
