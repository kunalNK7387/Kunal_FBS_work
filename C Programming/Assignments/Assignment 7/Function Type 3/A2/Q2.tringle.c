#include<stdio.h>
void tringle(int*,int*,int*);
void main(){
	int a,b,c;
	printf("Enter the length of side a: ");
	scanf("%d",& a);
	
	printf("Enter the length of side b: ");
	scanf("%d",& b);
	
	printf("Enter the length of side c: ");
	scanf("%d",& c);
	tringle(&a,&b,&c);
}
void tringle(int* a,int* b,int* c){
	
	
	
	if(*a== *b && *a== *c){
		printf("The trangle is equilateral.");
	}else if(*a== *b || *a== *c || *b== *c) {
		printf("The trangle is isosceles.");
	}else{
		printf("The trangle is scalene.");
	}
}

