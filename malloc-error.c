#include "monty.h"

/**
 * malloc_error - Malloc errors
 * @stack: Pointer
 * Return: Void
 */
void malloc_error(stack_t **stack)
{
	fprintf(stderr, "Error: malloc failed \n");
	free_stack(stack);
	exit(EXIT_FAILURE);
}
