#include "monty.h"
/**
 * mohanned_addnode - add node to the head stack
 * @head: head of the stack
 * @data: new_value
 */
void mohanned_addnode(stack_t **head, int data)
{

	stack_t *new = malloc(sizeof(stack_t)), *ptr = *head;

	if (new == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (new)
		new->prev = new;
	new->n = data;
	new->next = *head;
	new->prev = NULL;
	*head = new;
}
