#include "monty.h"

/**
 * malloc_failure - Malloc errors
 * @stack: Pointer
 * Return: Void
 */
void malloc_failure(stack_t **stack)
{
	fprintf(stderr, "Error: malloc failed \n");
	free_stack(stack);
	exit(EXIT_FAILURE);
}
