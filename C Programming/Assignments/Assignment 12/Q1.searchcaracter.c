#include<stdio.h>
char* mystrchar(char*,char);
void main() {
	char str[10];
	char ch;
	printf("Enter the string:",str);
	scanf("%s",&str);
	fflush(stdin);
	printf("Enter the character:",ch);
	scanf("%c",&ch);
	
	char a = mystrchar(str, ch);
	if(a!='\0'){
		printf("found ");
	}else{
		printf(" not found");
	}
}
char* mystrchar(char* str,char ch) {
	int i=0;
	while(str[i]!='\0') {
		if(str[i]==ch) {
			return 1;
		}
		i++;
	}
	return '\0';
}



