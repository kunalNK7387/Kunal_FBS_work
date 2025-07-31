#include<stdio.h>
char* mysrtcpy(char*,char*);
void main(){
	char str[10]="hello";
	char str1[10];
	
	int a=mysrtcpy(str1,str);
	printf("str= %s \n",str);
	printf("str1= %s",str1);
}
char* mysrtcpy(char* dest,char* str){
	for(int i=0;str[i] !='\0';i++)
	{
		dest[i]=str[i];
	}
	/*int i=0;
	while(str[i]!='\0'){
		dest[i]=str[i];
		i++;
	}
*/	
}