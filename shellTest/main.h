#ifndef SIMPLE_SHELL_MAIN_H
#define SIMPLE_SHELL_MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER 16

typedef struct s_list{
	char val;
	struct s_list *next;
}buf_node;

int _getchar();
ssize_t _getline(char **str, size_t *size);
ssize_t _getline2(char **str, size_t *size);

int _putchar(char c);
void _puts(char *s);
void _putsnl(char *s);
char *_strcpy(char *dest, char *src);
size_t _strlen(char *s);
int _atoi(char *s);

void execmd(char **argv);
char *get_path(char *command);


#endif
