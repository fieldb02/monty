#include "monty.h"

/**
 * opcode_push - Parses and pushes a value to the top of the stack
 * @head: Pointer to head node
 * @line_number: No opcode is encountered
 */
void opcode_push(stack_t **head, unsigned int line_number)
{
	size_t index = 0;
	int value;
	stack_t tail;

	if (!head || !line_number)
		exit(EXIT_FAILURE);
	if (stack_type.n[index] == '\0')
		push_error(head, line_number);
	while (stack_type.n[index] != '\0')
	{
		if (isdigit(stack_type.n[idx]) == 0 && stack_type.n[index] != '-')
			push_error(head, line_number);
		index++;
	}
	value = atoi(stack_type.n);
	if (stack_type.queue == 1)
	{
		tail = *head;
		while (tail && tail->next)
			tail = tail->next;
		push_value(&tail, value);
	}
	else
	{
		push_value(head, value);
	}
}
