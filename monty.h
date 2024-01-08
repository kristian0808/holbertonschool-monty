#ifndef MONTY_H
#define MONTY_H
#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <sys/types.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/* Define prototypes for stack function  */
void _push(stack_t **top, unsigned int line);
void _pall(stack_t **top, unsigned int line);
void _pint(stack_t **top, unsigned int line);
void _pop(stack_t **top, unsigned int line);
void _free(stack_t *top);
void _swap(stack_t **top, unsigned int line);
void _add(stack_t **top, unsigned int line);
void usage_error(void);
#endif
