#include "monty.h"
moh_t moh = {NULL, NULL, NULL, 0};
/**
 * main - monty code interpreter
 * @argc: number of arguments
 * @argv: monty file location
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	char *content;
	size_t size = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int count = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(1);
	}
	moh.file = fopen(argv[1], "r");
	if (!moh.file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(1);
	}
	do
	{
		content = NULL;
		read_line = getline(&content, &size, moh.file);
		moh.content = content;
		count++;
		if (read_line > 0)
			mohanned_execute(content, &stack, count);
		free(content);
	} while (read_line > 0);
	mohanned_freestack(stack);
	fclose(moh.file);
	return (0);
}
