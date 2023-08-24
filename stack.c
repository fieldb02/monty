#include "monty.h"

/**
 * free_stack- frees stack elements
 * @stack: Pointer to node
 * Return: Nada
 */
void free_stack(stack_t **stack)
{
	stack_t *n = NULL;

	if (!stack || !*stack)
		return;
	while (*stack)
	{
		n = *stack;
		*stack = (*stack)->next;
		free(n);
	}
}
