#include "monty.h"

/* File Handling errors */
/**
 * opcode_pint_error - Pint errors
 * @stack: Pointer to head node
 * @line_number: LineNo, where error is found
 *
 */

void opcode_pint_error(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
/**
 * opcode_pop_error - Pop errors
 * @stack: Pointer to head node
 *@line_number: lineNo, where error is found
 */
void opcode_pop_error(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
/**
 * opcode_swap_error - Swap errors
 * @stack: Pointer to head node
 *@line_number: lineNo, where error is found.
 */
void opcode_swap_error(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't swap, stack to short\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
/**
 * opcode_add_error - Add errors
 * @stack: Pointer to head node.
 * @line_number: line No, where error is found
 */
void opcode_add_error(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't add, stack too short \n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
/**
 * op_opcode_error- Instruction errors
 * @stack: Pointer to head node
 * @line_number: lineNo, where error is found
 */
void op_opcode_error(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: unknown instruction %s\n",
		line_number, stack_val.opcode);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
