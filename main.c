#include "monty.h"

/**
 * parse_bytecode_file - Parse the Monty ByteCode file
 * @file_ptr: Pointer to the bytecode file
 */
void parse_bytecode_file(FILE *file_ptr)
{
	char *line_buf = NULL, op_buf[20], val_buf[20];
	ssize_t byte_reader = 0, tkns = 0;
	size_t buf_size = 0;
	unsigned int line_number = 0;

	while ((byte_reader = getline(&line_buf, &buf_size, file_ptr)) != -1)
	{
		line_number++;
		tkns = sscanf(line_buf, "%s %s", op_buf, val_buf);

		if (tkns > 2)
		{
			free(line_buf);
			usage_error();
		}

		free(line_buf);
		line_buf = NULL;

		stack_type.opcode = op_buf;
		stack_type.n = val_buf;

		if (tkns > 0 && stack_type.opcode[0] != '#')
			get_op_func(stack_type.opcode)(&stack, line_number);

		memset(op_buf, '\0', sizeof(op_buf));
		memset(val_buf, '\0', sizeof(val_buf));
	}

	free(line_buf);
}

/**
 * main - Entry point for the Monty interpreter
 * @argc: Argument count
 * @argv: Array of argument tokens
 *
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	FILE *file_ptr;
	stack_t *stack = NULL;

	if (argc != 2 || !argv[1])
		usage_error();

	/* Default to stack mode */
	stack_type.queue = 0;

	/* Open the requested Monty ByteCode file */
	stack_type.file = argv[1];
	file_ptr = fopen(stack_type.file, "r");
	if (!file_ptr)
		file_error();

	parse_bytecode_file(file_ptr);

	free_stack(&stack);
	fclose(file_ptr);

	return (0);
}
