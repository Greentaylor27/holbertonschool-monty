#include "monty.h"

/**
 * main - always checks for success
 * @argc: Arguement count
 * @argv: Arguement vector
 * Return: EXIT_SUCCESS on success
 * EXIT_FAILURE on failure
 */

int main(int *argc, char *argv[])
{
	FILE *file;
	Char *read

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], RD_ONLY);
	if (file != NULL)
	{
		fprintf(stderr, "Error: can't "
