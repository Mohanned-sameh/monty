#include "monty.h"
/**
 * mohanned_execute - executes the opcode
 * @stack: head linked list - stack
 * @count: line_count
 * @file: poiner to monty file
 * @content: line content
 * Return: 1;
 */
int mohanned_execute(char *content, stack_t **stack, unsigned int count, FILE *file)
{
	instruction_t operators[] = {
		{"push", mohanned_push}, {"pall", mohanned_pall},
		{"pint", mohanned_pint}, {"pop", mohanned_pop},
		{"swap", mohanned_swap}, {"add", mohanned_add},
		{"nop", mohanned_nop}, {"sub", mohanned_sub},
		{"div", mohanned_div}, {"mul", mohanned_mul},
		{"mod", mohanned_mod}, {"pchar", mohanned_pchar},
		{"pstr", mohanned_pstr}, {"rotl", mohanned_rotl},
		{"rotr", mohanned_rotr}, {"queue", mohanned_queue},
		{"stack", mohanned_stack}, {NULL, NULL}
		};
	unsigned int i = 0;
	char *operator;

	operator = strtok(content, " \n\t");
	if (operator && operator[0] == '#')
		return (0);
	moh.arg = strtok(NULL, " \n\t");
	while (operators[i].opcode && operator)
	{
		if (strcmp(operator, operators[i].opcode) == 0)
		{
			operators[i].f(stack, count);
			return (0);
		}
		i++;
	}
	if (operator && operators[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", count, operator);
		fclose(file);
		free(content);
		mohanned_freestack(*stack);
		exit(EXIT_FAILURE);
	}
	return (1);
}
