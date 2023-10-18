#include "monty.h"
/**
 * mohanned_pall - prints the stack
 * @head: stack head
 */
void mohanned_pall(stack_t **head)
{
	stack_t *temp = *head;

	if (temp == NULL)
		return;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
