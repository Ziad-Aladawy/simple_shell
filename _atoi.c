#include "shellTest/main.h"

int _atoi(char *s){
	char isNum = 0;
	int res = 0, sign = 1;

	for(int i = 0; s[i] != '\0'; i++){
		if(s[i] == '-')
			sign *= -1;
		while(s[i] >= '0' && s[i] <= '9'){
			res = res * 10 + (s[i] - '0');
			isNum = 1;
			i++;
		}
		if(isNum)
			break;
	}
	if(!isNum)
		return 0;
	return res * sign;
}
