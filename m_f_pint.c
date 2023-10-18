#include "monty.h"
/**
 * mohanned_pint - prints the top
 * @head: stack head
 * @count: line_number
 */
void mohanned_pint(stack_t **head, unsigned int count)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", count);
		fclose(moh.file);
		free(moh.content);
		mohanned_freestack(*head);
		exit(1);
	}
	printf("%d\n", (*head)->n);
}
