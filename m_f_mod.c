#include "monty.h"
/**
 * mohanned_mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @head: stack head
 * @count: line_number
 */
void mohanned_mod(stack_t **head, unsigned int count)
{
	stack_t *h;
	int len = 0, amount;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", count);
		fclose(moh.file);
		free(moh.content);
		mohanned_freestack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		fclose(moh.file);
		free(moh.content);
		mohanned_freestack(*head);
		exit(EXIT_FAILURE);
	}
	amount = h->next->n % h->n;
	h->next->n = amount;
	*head = h->next;
	free(h);
}
