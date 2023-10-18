#include "monty.h"
/**
 * mohanned_div - divides the top two elements of the stack.
 * @head: stack head
 * @count: line_number
 */
void mohanned_div(stack_t **head, unsigned int count)
{
	stack_t *temp = *head;
	int len = 0, counts;

	while (temp)
	{
		temp = temp->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", count);
		fclose(moh.file);
		free(moh.content);
		mohanned_freestack(*head);
		exit(1);
	}
	temp = *head;
	if (temp->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		fclose(moh.file);
		free(moh.content);
		mohanned_freestack(*head);
		exit(1);
	}
	counts = temp->next->n / temp->n;
	temp->next->n = counts;
	*head = temp->next;
	free(temp);
}
