#include "shellTest/main.h"

void execmd(char **argv){
	char *command = NULL;
	char *actual_command = NULL;

	if (argv) {
		command = argv[0];

		actual_command = get_path(command);

		printf("%s", actual_command);

		if (execve(actual_command, argv, NULL) == -1)
			perror("Error: ");
	}
}