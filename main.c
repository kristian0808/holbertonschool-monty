#include "monty.h"
/**
 * main - Entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments as strings.
 * Return: 0 upon success, other values for errors.
 */

int main(int argc, char *argv[])
{
    unsigned int line = 1;
    FILE *file_exp = fopen(argv[1], "r");
    char *buffer, *token;
    size_t bufsize = 32;
    size_t characters;

    buffer = (char *)malloc(bufsize * (sizeof(char)));

    if (file_exp == NULL)
    {
        printf ("Error");
    }
    else
        printf("success");

    while ((characters = getline(&buffer,&bufsize,stdin)) != 1)
    {
        token  = strtok(buffer, "\t\n ");

        while (token != NULL){
            if (strcmp(token, "push") == 0)
            {
                num = atoi(strtok(NULL, ""));
                printf("Hello");
            }

            token = strtok(NULL, " ");
        }
        line++;
    }
    
    // stack_t *new_node = NULL;

    // num = 2;
    // _push(&new_node, 0);
    // _pall(&new_node, 0);

    return (0);
}
