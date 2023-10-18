#include "monty.h"
/**
 * mohanned_pop - prints the top
 * @head: stack head
 * @count: line_number
 */
void mohanned_pop(stack_t **head, unsigned int count)
{
	stack_t *temp = *head;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", count);
		fclose(moh.file);
		free(moh.content);
		mohanned_freestack(*head);
		exit(1);
	}
	*head = temp->next;
	free(temp);
}
