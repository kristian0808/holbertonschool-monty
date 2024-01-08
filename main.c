#include "monty.h"
int num;
int main(int argc, char **argv)
{
	void (*p_func)(stack_t **, unsigned int);
	ssize_t line;
	FILE *fp;
	char *buff = NULL, *token = NULL, command[1024];
	size_t length = 0;
	unsigned int counter = 1;
	stack_t *top = NULL;

	if (argc != 2)
		usage_error();
	fp = fopen(argv[1], "r");
	if (fp == NULL)
		file_error(argv);
	while ((line = getline(&buff, &length, fp)) != -1)
	{
		token = strtok(buff, " \n\t\r");
		if (*token == '\0')
			continue;
		strcpy(command, token);
		if (strcmp(token, "push") == 0)
		{
			token = strtok(NULL, " \r\n\t");
			if (token == NULL)
				printf("Error");
			num = atoi(token);
			p_func = get_op_code(command, counter);
			p_func(&top, counter);
		}
		else
		{
			p_func = get_op_code(token, counter);
			p_func(&top, counter);
		}
		counter++;
	}
	fclose(fp);
	if (buff != NULL)
		free(buff);
	_free(top);
	return (0);
}
