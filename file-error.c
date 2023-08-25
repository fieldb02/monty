#include "monty.h"

/**
 * file_failure - Error when file is not opened
 * Return: void
 */
void file_failure(void)
{
	fprintf(stderr, "Error: Can't open
			file %s \n", stack_type.file);
	exit(EXIT_FAILURE);
}
