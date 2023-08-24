#include "monty.h"
/**
 * op_func- Gets the op_code functions
 * @s: Pointer to node
 * Return: Desired pointer, else, opcode_error
 */
void (*op_func(char *s))(stack_t **, unsigned int)
{
	instruction_t instructions[] = {
		{"push", opcode_push},
		{"pall", opcode_pall},
		{"pint", opcode_pint},
		{"pop", opcode_pop},
		{"swap", opcode_swap},
		{"add", opcode_add},
		{"nop", opcode_nop},
		{"sub", opcode_sub},
		{"div", opcode_div},
		{"mul", opcode_mul},
		{"mod", opcode_mod},
		{"pchar", opcode_pchar},
		{"#", opcode_nop},
		{NULL, NULL}
	};
	int index = 0;

	while (instructions[index].opcode)
	{
		if (strcmp(instructions[index].opcode, s) == 0)
			return (instructions[index].f);
		index++;
	}
	return (opcode_failure);
}
