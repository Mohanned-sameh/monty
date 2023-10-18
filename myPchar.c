#include "monty.h"
/**
 * mohanned_pchar - prints the char at the top of the stack,
 * followed by a new line
 * @head: stack head
 * @count: line_number
 */
void mohanned_pchar(stack_t **head, unsigned int count)
{
	stack_t *temp = *head;

	if (!temp)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", count);
		fclose(moh.file);
		free(moh.content);
		mohanned_freestack(*head);
		exit(1);
	}
	if (temp->n > 127 || temp->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", count);
		fclose(moh.file);
		free(moh.content);
		mohanned_freestack(*head);
		exit(1);
	}
	printf("%c\n", temp->n);
}
