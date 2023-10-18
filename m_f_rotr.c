#include "monty.h"
/**
 *mohanned_rotr- rotates the stack to the bottom
 *@head: stack head
 */
void mohanned_rotr(stack_t **head)
{
	stack_t *temp = *head;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = *head;
	temp->prev->next = NULL;
	temp->prev = NULL;
	(*head)->prev = temp;
	(*head) = temp;
}
