#include<stdio.h>
char* mystrrev(char*);
void main() {
	char str[10]="hello";
	char str1[10];
	mystrrev(str);
	printf("str1= %s",str);

}
char* mystrrev(char* str) {
	int i=0;
	int j =strlen(str)-1;
	char temp;

	while(i<j) {
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
}