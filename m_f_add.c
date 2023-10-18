#include "monty.h"
/**
 * mohanned_add - adds the top two elements of the stack.
 * @head: stack head
 * @count: line_number
 */
void mohanned_add(stack_t **head, unsigned int count)
{
	stack_t *temp = *head;
	int len = 0, amount;

	while (temp)
	{
		temp = temp->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", count);
		fclose(moh.file);
		free(moh.content);
		mohanned_freestack(*head);
		exit(1);
	}
	temp = *head;
	amount = temp->n + temp->next->n;
	temp->next->n = amount;
	*head = temp->next;
	free(temp);
}
