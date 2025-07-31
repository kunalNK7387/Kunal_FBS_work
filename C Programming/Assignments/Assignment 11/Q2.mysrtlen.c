#include<stdio.h>
char* mysrtlen(char*);
void main() {
	char str[]="hello";

	int a=mysrtlen(str);
	printf("str= %d \n",a);

}
char* mysrtlen(char* str) {
	int count=0;
	while(str[count]!='\0') {
		count++;
	}

	return count;

}