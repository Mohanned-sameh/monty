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
	stack_t *new_node, *amount;

	amount = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (amount)
	{
		while (amount->next)
			amount = amount->next;
	}
	if (!amount)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		amount->next = new_node;
		new_node->prev = amount;
	}
}
