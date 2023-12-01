#include "shellTest/main.h"

char *_strcpy(char *dest, char *src){
	int i=0;
	for(; src[i] != '\0'; i++){

		dest[i] = src[i];
	}
	dest[i] = '\0';
	return dest;
}

//void _strcpy2(char *dest, char *src){
//	while((*dest++ = *src++));
//}