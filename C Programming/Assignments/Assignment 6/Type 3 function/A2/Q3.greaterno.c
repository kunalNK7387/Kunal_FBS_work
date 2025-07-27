#include<stdio.h>
void greater(int,int);
void main() {
	int a, b;

	printf("enter the number");
	scanf("%d",&a );


	printf("enter the number");
	scanf("%d",&b );

	greater(a,b);
}
void greater(int a, int b) {



	if(a>b) {
		printf("a is greater");
	} else {
		printf("b is greater");
	}
}