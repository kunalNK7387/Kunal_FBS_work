#include<stdio.h>
int greater();
void main() {
	int a= greater();
	printf("a is greater");
}
int greater(){

	int a, b;

	printf("enter the number");
	scanf("%d",&a );


	printf("enter the number");
	scanf("%d",&b );

	if(a>b) {
		return a;
	
	} else {
		printf("b is greater");
	}
	
}