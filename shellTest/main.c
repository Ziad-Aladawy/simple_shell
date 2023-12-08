#include "main.h"

/**
 * main - Shell test
 * @argc: number of args
 * @argv: arguments themselves
 * Return: 0
 */
int main(int argc, char **argv)
{
	char *prompt = "Lamma@Shell $ ";
	/* where we will process the commands*/
	char *command;
	size_t n;
	const char *delim = " \n";

	/* I cast argc and argv to void to avoid warnings nothing special dw */
	(void)argc;


	/* to continuously display the prompt I used an infinite loop*/
	while (1) {
		printf("%s", prompt);
		/* read about getline function - man 3 getline - in terminal */
		/* char Count gets the returned size of input or -1 if EOF */
		ssize_t command_charCount = getline(&command, &n, stdin);


		if (command_charCount == -1)
		{
			/* Ctrl + D is pressed */
			printf("m5smak eb3d 3ni ana m4 tay2ak...");
			return (-1);
		}

		char *command_copy = malloc(sizeof(char) * _strlen(command));
		_strcpy(command_copy, command);

		if (command_copy == NULL){
			perror("tsh: memory allocation error");
			return (-1);
		}

		int token_read = 0;
		char *token = strtok(command, delim);
		while(NULL != token)
		{
			token_read++;
			token = strtok(NULL, delim);
			printf("%s", token);
		}
		token_read++;

		argv = malloc(sizeof(char *) * token_read);
		token = strtok(command_copy, delim);
		int i = 0;
		while(NULL != token)
		{
			argv[i] = malloc(sizeof(char) * _strlen(token));
			_strcpy(argv[i], token);
			token = strtok(NULL, delim);
			i++;
		}
		argv[i] = NULL;

		/* Testing if argv works fine */
		/* for (int counter = 0; counter<token_read-1; counter++){
			printf("%s\n", argv[counter]);
		} */

		execmd(argv);


		/* free the space allocated by getline */
		free(command);
		free(command_copy);
		free(argv);
		/* set command to NULL to avoid reusing the same memory block */
		command = NULL;
	}
	return (0);
}