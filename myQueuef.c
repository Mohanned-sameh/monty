#include "monty.h"
/**
 * mohanned_queue - prints the top
 */
void mohanned_queue(void)
{
	moh.lifi = 1;
}

/**
 * mohanned_addqueue - add node to the tail stack
 * @head: head of the stack
 * @data: new_value
 */
void mohanned_addqueue(stack_t **head, int data)
{
	stack_t *new = malloc(sizeof(stack_t)), *ptr = *head;

	if (new == NULL)
		printf("Error\n");
	new->n = data;
	new->next = NULL;
	if (ptr)
		while (ptr->next)
			ptr = ptr->next;
	if (!ptr)
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
		ptr->next = new;
		new->prev = ptr;
	}
}
