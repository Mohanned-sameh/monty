#include "monty.h"
/**
 *mohanned_sub- sustration
 *@head: stack head
 *@count: line_number
 */
void mohanned_sub(stack_t **head, unsigned int count)
{
	stack_t *temp = *head;
	int counts, nodes;

	for (nodes = 0; temp != NULL; nodes++)
		temp = temp->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count);
		fclose(moh.file);
		free(moh.content);
		mohanned_freestack(*head);
		exit(1);
	}
	temp = *head;
	counts = temp->next->n - temp->n;
	temp->next->n = counts;
	*head = temp->next;
	free(temp);
}
