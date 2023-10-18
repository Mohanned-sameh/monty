#include "monty.h"
/**
 *mohanned_rotr- rotates the stack to the bottom
 *@head: stack head
 *@count: line_number
 */
void mohanned_rotr(stack_t **head, unsigned int count)
{
	stack_t *copy;

	(void)count;
	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*head)->prev = copy;
	(*head) = copy;
}
