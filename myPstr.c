#include "monty.h"
/**
 * mohanned_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @count: line_number
 */
void mohanned_pstr(stack_t **head, unsigned int count)
{
	stack_t *temp = *head;

	(void)count;
	while (temp)
	{
		if (temp->n > 127 || temp->n <= 0)
			break;
		printf("%c", temp->n);
		temp = temp->next;
	}
	printf("\n");
}
