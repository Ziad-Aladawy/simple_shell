#include "shellTest/main.h"

int _getchar(){
	int c;
	read(0, &c, 1) == -1;
	return c;
}