#include "shellTest/main.h"


ssize_t _getline(char **str, size_t *size){
	ssize_t num_read = 0;
	char c;
	int i = 0;
	buf_node *head = NULL;
	buf_node *tail = NULL;

	while('\n' != (c = _getchar())){
		num_read++;
		if (NULL == head) {
			head = tail = malloc(sizeof(buf_node));
			tail->val = c;
		} else {
			tail = tail->next = malloc(sizeof(buf_node));
			tail->val = c;
		}
		tail->next = NULL;
	}
	if(NULL == (*str)){
		(*size) = BUFFER;
		(*str) = malloc((*size) + 1);
	}
	else if(num_read >= (*size)){
		(*size) += BUFFER;
		free((*str));
		(*str) = malloc((*size) + 1);
	}
	while(head){
		(*str)[i] = head->val;
		buf_node *next = head->next;
		free(head);
		head = next;
		i++;
	}
	(*str)[i] = '\0';
	return num_read;
}