#include<stdio.h>
char* mystrncmp(char*,char*,int);
void main() {
	char str[10]="hello";
	char str1[10]="hello";

	int a=mystrncmp(str,str1,3);
	if(a==0) {
	printf(" str and str1:same");
	}else{
		printf("str and str1 :not same ");
	}
}
char* mystrncmp(char* str,char* str1,int n) {
	int i=0;
	while(str[i]!='\0') {
		if(str[i]==str1[i]) {
			i++;
		} else {
			return -1;
		}
		i++;
	}
	return 0;
}