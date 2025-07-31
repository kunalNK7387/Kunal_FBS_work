#include<stdio.h>
char* mystrchar(char*,char*);
void main() {
	char str[]="firstbit ";
	char ch='b';

	char *res = mystrchar(str, ch);
	if(res!='\0'){
		printf("found at index: %ld\n", res - str);
	}else{
		printf(" not found");
	}
}
char* mystrchar(char* str,char* ch) {
	int i=0;
	while(str[i]!='\0') {
		if(str[i]==ch) {
			return &str[i] ;
		}
		i++;
	}
	return '\0';
}



