#include "shellTest/main.h"

ssize_t _getline2(char **str, size_t *size){
	char c;
	int num_read = 0;
	int fd = 0;
	int access = 0;

	if(NULL == (*str)){
		(*str) = malloc(BUFFER + 1);
		(*size) = BUFFER;
	}
	while('\n' != (c = _getchar())){
		num_read++;
		if(num_read >= (*size)){
			char *tmp = malloc((*size) + BUFFER + 1);
			for(int i = 0; i < (*size); i++){
				tmp[i] = (*str)[i];
			}
			free(*str);
			(*str) = malloc((*size) + BUFFER + 1);
			for(int i = 0; i < (*size); i++){
				(*str)[i] = tmp[i];
			}
			free(tmp);
			(*size) += BUFFER;
		}
		(*str)[num_read - 1] = c;
	}
	(*str)[num_read] = '\0';
	return num_read;
}







