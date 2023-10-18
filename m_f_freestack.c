#include "monty.h"
/**
 * mohanned_freestack - frees a doubly linked list
 * @head: head of the stack
 */
void mohanned_freestack(stack_t *head)
{
	stack_t *amount;

	amount = head;
	while (head)
	{
		amount = head->next;
		free(head);
		head = amount;
	}
}
