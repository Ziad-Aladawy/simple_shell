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

	/* I cast argc and argv to void to avoid warnings nothing special dw */
	(void)argc, (void)argv;


	/* to continuously display the prompt I used an infinite loop*/
	while (1) {
		printf("%s", prompt);
		/* read about getline function - man 3 getline - in terminal */
		/* char Count gets the returned size of input or -1 if EOF */
		ssize_t charCount = getline(&command, &n, stdin);

		if (charCount == -1)
		{
			/* Ctrl + D is pressed */
			printf("m5smak eb3d 3ni ana m4 tay2ak...");
			return (-1);
		}


		/* free the space allocated by getline */
		free(command);
		/* set command to NULL to avoid reusing the same memory block */
		command = NULL;
	}
	return (0);
}