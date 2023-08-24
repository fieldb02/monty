#include "monty.h"

/**
 * file_error - Error when file is not opened
 * Return: void
 */
void file_error(void)
{
	fprintf(stderr, "Error: Unable to open
			file %s \n", stack_type.file);
	exit(EXIT_FAILURE);
}
