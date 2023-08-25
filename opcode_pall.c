#include "monty.h"

/**
 * opcode_pall - Starting from the very top, it prints all the
 * elements of a stack
 * @stack: Pointer to head node
 * @line_number: No where opcode was encountered
 *
 * Return: nothing,else, exit on failure
 */
void opcode_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *c_node = NULL;

	if (!line_number)
/*an error should happen*/
		return;
	c_node = *stack;
	while (c_node)
	{
		printf("%d\n", c_node->n);
		c_node = c_node->next;
	}
}
