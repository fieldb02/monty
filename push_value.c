#include "monty.h"

/**
 * push_value - Push to top
 * @head: Pointer to head node
 * @value: Value to be pushed
 */
void push_value(stack_t **head, int value)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (!new_node)
		malloc_error(head);
	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = *head;
	if (*head)
		(*head)->prev = new_node;
	*head = new_node;
}
