#include "monty.h"
/**
 * mohanned_queue - prints the top
 * @head: stack head
 * @count: line_number
 */
void mohanned_queue(stack_t **head, unsigned int count)
{
	(void)head;
	(void)count;
	moh.lifi = 1;
}

/**
 * mohanned_addqueue - add node to the tail stack
 * @n: new_value
 * @head: head of the stack
 */
void mohanned_addqueue(stack_t **head, int n)
{
	stack_t *new = malloc(sizeof(stack_t)), *counts = *head;

	if (new == NULL)
		printf("Error\n");
	new->n = n;
	new->next = NULL;
	if (counts)
		while (counts->next)
			counts = counts->next;
	if (!counts)
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
		counts->next = new;
		new->prev = counts;
	}
}
