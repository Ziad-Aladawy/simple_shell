#include "shellTest/main.h"

void _putsnl(char *s){
	for(s; *s != '\0'; s++){
		_putchar(*s);
	}
	_putchar('\n');
}

void _puts(char *s){
	for(s; *s != '\0'; s++){
		_putchar(*s);
	}
}