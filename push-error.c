#include "monty.h"

/**
 * push_failure - Push error function
 * @stack: Pointer to head node
 * @line_number: Push error ocured
 */
void push_failure(stack_t **stack, unsigned int line_number)
{
	 fprintf(stderr, "L%d: usage: push integer\n", line_number);
	 free_stack(stack);
	 exit(EXIT_FAILURE);
}
