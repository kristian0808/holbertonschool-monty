#include "monty.h"
/**
 * get_function - selects the correct function to perform the operation
 * @token: The operator passed as an argument to the program
 * Return: A pointer to the function that corresponds to the operator,
 *         or NULL if no such function is found.
 */

void (*get_function(char *token))(stack_t **top, unsigned int line_number)
{
    unsigned int i;

    instruction_t operation[] = {
        {"push", _push},
        {"pall", _pall},
        {NULL, NULL}
    };

    for (i = 0; operation[i].opcode != NULL; i++)
    {
        if (strcmp(operation[i].opcode, token) == 0)
        {
            return (operation[i].f);
        }
    }
    return (NULL);
}
