#include<stdio.h>
char* mystrrchr(char*,char*);
void main() {
	char str[]="firstbit ";
	char ch='i';

	char *res = mystrrchr(str, ch);
	if(res!='\0'){
		printf("found at index: %ld\n",res - str);
	}else{
		printf(" not found");
	}
}
char* mystrrchr(char* str,char* ch) {
	int i;
	char* last='\0';
	while(str[i]!='\0') {
		if(str[i]==ch) {
			last = &str[i] ;
		}
		i++;
	}
	return last;
}



