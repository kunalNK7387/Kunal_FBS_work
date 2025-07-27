#include<stdio.h>
int  grade();
void main() {
	int a=grade();
	printf("Marks %d",a);
}
int grade(){

	int a;
	printf("Enter marks :");
	scanf("%d",&a);
	
	if(a>75){
		printf("Distinction.\n");
		
	}else if(a>65){
		printf("First Class.\n");
		
	}else if(a>55){
		printf("Second Class.\n");
	}else if(a>=40){
		printf("Pass class.\n");
	}else{
		printf("Fail.\n");
	}
	return a;
}