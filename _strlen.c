#include "shellTest/main.h"

size_t _strlen(char *s){
	size_t cnt = 0;
	for(s; *s != '\0'; s++){
		cnt++;
	}
	return cnt;
}