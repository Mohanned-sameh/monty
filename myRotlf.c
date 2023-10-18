#include "monty.h"
/**
 *mohanned_rotl- rotates the stack to the top
 *@head: stack head
 */
void mohanned_rotl(stack_t **head)
{
	stack_t *tmp = *head, *ptr;

	if (*head == NULL || (*head)->next == NULL)
		return;
	ptr = (*head)->next;
	ptr->prev = NULL;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = ptr;
}
