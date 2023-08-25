#include "monty.h"

/* File Handling errors */
/**
 * opcode_pint_failure - Pint errors
 * @stack: Pointer to head node
 * @line_number: LineNo, where error is found
 *
 */

void opcode_pint_failure(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
/**
 * opcode_pop_failure - Pop errors
 * @stack: Pointer to head node
 *@line_number: lineNo, where error is found
 */
void opcode_pop_failure(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
/**
 * opcode_swap_failure - Swap errors
 * @stack: Pointer to head node
 *@line_number: lineNo, where error is found.
 */
void opcode_swap_failure(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't swap, stack to short\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
/**
 * opcode_add_failure - Add errors
 * @stack: Pointer to head node.
 * @line_number: line No, where error is found
 */
void opcode_add_failure(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't add, stack too short \n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
/**
 * op_opcode_failure - Instruction errors
 * @stack: Pointer to head node
 * @line_number: lineNo, where error is found
 */
void op_opcode_failure(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: unknown instruction %s\n",
			line_number, stack_type.opcode);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
