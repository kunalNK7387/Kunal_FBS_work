#include<stdio.h>
char* mystrcmp(char*,char*);
void main() {
	char str[10]="hello";
	char str1[10]="hello";

	int a=mystrcmp(str,str1);
	if(a==0) {
	printf(" str and str1:same");
	}else{
		printf("str and str1 :not same ");
	}
}
char* mystrcmp(char* str,char* str1) {
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

	/*int i=0;
	while(str[i]!='\0'){
		dest[i]=str[i];
		i++;
	}
	*/
}