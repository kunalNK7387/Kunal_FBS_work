#include<stdio.h>
char* mysrtcat(char*,char*);
void main(){
	char str[10]="hello";
	char str1[10]="frinds";
	
	mysrtcat(str,str1);
	printf("str= %s \n",str);
}
char* mysrtcat(char* str,char* str1){
	int count =0;
	while(str[count]!='\0'){
		count++;
	}
	int i=0;
	while(str1[i]!='\0'){
		str[count+i]=str1[i];
		i++;
	}
	str[count+i]='\0';
}