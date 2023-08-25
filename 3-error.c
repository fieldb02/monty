#include "monty.h"

/**
 * opcode_div_failure - Div
 * @stack:Pointer to head node
 * @line_number: lineNo, where error is found
 */
void opcode_div_failure(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}

/**
 * opcode_zero_failure - Zero
 * @stack: Pointer to head node
 * @line_number: lineNo, where error is found
 *
 */
void opcode_zero_failure(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: division by zero\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
/**
 * opcode_mul_failure - Mul
 * @stack: Pointer to head node
 * @line_number: lineNo, where error is found
 */
void opcode_mul_failure(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
/**
 * opcode_mod_failure - mod
 * @stack: Pointer to head node
 * @line_number: lineNo, where error is found
 *
 */
void opcode_mod_failure(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
/**
 * opcode_pchar_failure - pchar
 * @stack: Pointer to head Node.
 * @line_number: lineNo, where error is found
 *
 */
void opcode_pchar_failure(stack_t **stack, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
	free_stack(stack);
	exit(EXIT_FAILURE);
}
