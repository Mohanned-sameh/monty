#include "monty.h"
/**
 * mohanned_pall - prints the stack
 * @head: stack head
 * @count: line_number
 */
void mohanned_pall(stack_t **head, unsigned int count)
{
	stack_t *temp = *head;

	(void)count;
	if (temp == NULL)
		return;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
