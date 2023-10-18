#include "monty.h"
/**
 * mohanned_push - add node to the stack
 * @head: stack head
 * @count: line_number
 */
void mohanned_push(stack_t **head, unsigned int count)
{
	int num, j = 0, fl = 0;

	if (moh.arg)
	{
		if (moh.arg[0] == '-')
			j++;
		for (; moh.arg[j] != '\0'; j++)
			if (moh.arg[j] > 57 || moh.arg[j] < 48)
				fl = 1;
		if (fl == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", count);
			fclose(moh.file);
			free(moh.content);
			mohanned_freestack(*head);
			exit(1);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", count);
		fclose(moh.file);
		free(moh.content);
		mohanned_freestack(*head);
		exit(1);
	}
	num = atoi(moh.arg);
	if (moh.lifi == 0)
		mohanned_addnode(head, num);
	else
		mohanned_addqueue(head, num);
}
