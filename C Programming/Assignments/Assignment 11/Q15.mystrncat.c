#include<stdio.h>
char* mysrtncat(char*,char*,int);
void main(){
	char str[10]="hello";
	char str1[10]="frinds";
	
	mysrtncat(str,str1,2);
	printf("str= %s \n",str);
}
char* mysrtncat(char* str,char* str1,int n){
	int count =0;
	while(str[count]!='\0'){
		count++;
	}
	
	int i=0;
	while(i<n && str1[i]!='\0'){
		str[count+i]=str1[i];
		i++;
	}
	str[count+i]='\0';
}