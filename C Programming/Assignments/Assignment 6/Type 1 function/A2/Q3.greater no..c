#include<stdio.h>
void greater();
void main() {
	greater();
}
void greater(){

	int a, b;

	printf("enter the number");
	scanf("%d",&a );


	printf("enter the number");
	scanf("%d",&b );

	if(a>b) {
		printf("a is greater");
	} else {
		printf("b is greater");
	}
}