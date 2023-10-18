#include "monty.h"
/**
 *mohanned_rotl- rotates the stack to the top
 *@head: stack head
 *@count: line_number
 */
void mohanned_rotl(stack_t **head, unsigned int count)
{
	stack_t *tmp = *head, *amount;

	(void)count;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	amount = (*head)->next;
	amount->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = amount;
}
