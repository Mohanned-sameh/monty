#include "monty.h"
/**
 * mohanned_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 */
void mohanned_pstr(stack_t **head)
{
	stack_t *temp = *head;

	while (temp)
	{
		if (temp->n > 127 || temp->n <= 0)
			break;
		printf("%c", temp->n);
		temp = temp->next;
	}
	printf("\n");
}
