#include "monty.h"
/**
 *mohanned_sub- sustration
 *@head: stack head
 *@count: line_number
 */
void mohanned_sub(stack_t **head, unsigned int count)
{
	stack_t *temp = *head;
	int count, num;

	for (num = 0; temp != NULL; num++)
		temp = temp->next;
	if (num < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count);
		fclose(moh.file);
		free(moh.content);
		mohanned_freestack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	count = temp->next->n - temp->n;
	temp->next->n = count;
	*head = temp->next;
	free(temp);
}
