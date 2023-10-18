#include "monty.h"
/**
 *mohanned_sub- sustration
 *@head: stack head
 *@count: line_number
 */
void mohanned_sub(stack_t **head, unsigned int count)
{
	stack_t *amount;
	int sus, nodes;

	amount = *head;
	for (nodes = 0; amount != NULL; nodes++)
		amount = amount->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count);
		fclose(moh.file);
		free(moh.content);
		mohanned_freestack(*head);
		exit(EXIT_FAILURE);
	}
	amount = *head;
	sus = amount->next->n - amount->n;
	amount->next->n = sus;
	*head = amount->next;
	free(amount);
}
