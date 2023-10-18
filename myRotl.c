#include "monty.h"
/**
 *mohanned_rotl- rotates the stack to the top
 *@head: stack head
 *@count: line_number
 */
void mohanned_rotl(stack_t **head, unsigned int count)
{
	stack_t *temp = *head, *counts;

	(void)count;
	if (*head == NULL || (*head)->next == NULL)
		return;
	counts = (*head)->next;
	counts->prev = NULL;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = counts;
}
