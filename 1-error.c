#include "monty.h"

/*This file contains errors handling for file and user input*/

/**
 * file_failure - Shows errors when file fails to open
 * Return: void
 */
void file_failure(void)
{
	fprintf(stderr, "Error: Can't open file %s \n", stack_type.file);
	exit(EXIT_FAILURE);
}
/**
 * input_failure - User input syntax error
 * Return: void
 */
void input_failure(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}
