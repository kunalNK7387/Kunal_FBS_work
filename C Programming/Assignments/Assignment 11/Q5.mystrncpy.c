#include<stdio.h>
char* mysrtncpy(char*,char*,int);
void main() {
	char str[10]="hello";
	char str1[10];
	mysrtncpy(str1,str,2);
	printf("str1= %s",str1);
}
char* mysrtncpy(char* dest,char* str,int n) {
	for(int i=0; i<n; i++) {
		dest[i]=str[i];
	}

}