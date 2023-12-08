#include "shellTest/main.h"

char *get_path(char *command)
{
	char *path = NULL;
	char *command_path = NULL;
	char *delim = ":";
	// el bta3 da ana gaybo mn chatgpt
	struct stat buffer;
	size_t command_len = _strlen(command);
	size_t path_len = 0;

	path = getenv("PATH");
	if(path){
		char* token = strtok(path, delim);
		while(NULL != token)
		{
			path_len = _strlen(token);
			// append path, /, filename, '\0' to the file_path
			// 2 for the / and the '\0'
			command_path = malloc(path_len + command_len + 2);
			_strcpy(command_path, token);
			strcat(command_path, "/");
			strcat(command_path, command);
			strcat(command_path, "\0");


			if(stat(command_path, &buffer) == 0)
				return (command_path);
			else
			token = strtok(NULL, delim);
		}
	}
	return NULL;
}