#include "monty.h"
/**
 * _pchar - function that print the first char on a stack
 * @stack: a double linked list
 * @line_number: number of line in code to print error message.
 */
void _pchar(stack_t **stack, unsigned int line_number)
{
	stack_t *p;

	p = *stack;
	if (p == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (p->n < 0 || p->n > 255)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
	putchar(p->n);
	putchar('\n');
}
