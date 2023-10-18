#include "monty.h"
/**
 * mohanned_freestack - frees a doubly linked list
 * @head: head of the stack
 */
void mohanned_freestack(stack_t *head)
{
	stack_t *ptr = head;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
