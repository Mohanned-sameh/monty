#include "monty.h"
/**
 * mohanned_addnode - add node to the head stack
 * @head: head of the stack
 * @n: new_value
 */
void mohanned_addnode(stack_t **head, int n)
{

	stack_t *new = malloc(sizeof(stack_t)), *temp = *head;

	if (new == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (temp)
		temp->prev = new;
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
}
