#include<stdio.h>
int grade(int );
void main() {
	int a;
	printf("Enter marks :");
	scanf("%d",&a);
	
	grade(a);
}
int  grade(int a){

	
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
	return 0;
}