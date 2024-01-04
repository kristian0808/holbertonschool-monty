#include "monty.h"
int num;

/**
 * _push - function that inserts new node in the begining
 * @top: firt element of a stack list
 * @line_number: int value for the line where is the function
 *
 */
void _push(stack_t **top, unsigned int line_number)
{
    stack_t *new_node = malloc(sizeof(stack_t));

    if (new_node == NULL)
        printf("Error");
    new_node->n = num;
    new_node->prev = NULL;
    new_node->next = NULL;
    if (*top == NULL)
    {
        *top = new_node;
    }
    else
    {
        new_node->next = *top;
        (*top)->prev = new_node;
        *top = new_node;
    }
}

/**
 * _pall - function that prints all elements of a stack
 * @top: firt element of a stack list
 * @line_number: int value for the line where is the function
 *
 */

void _pall(stack_t **top, unsigned int line_number)
{
    while (*top != NULL)
    {
        printf("%d\n", (*top)->n);
        *top = (*top)->next;
    }
}
