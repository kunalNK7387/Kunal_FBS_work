#include<stdio.h>
int greater(int ,int);
void main() {
	int no, b;

	printf("enter the number");
	scanf("%d",&no );


	printf("enter the number");
	scanf("%d",&b );

	int a=greater(no,b);
	if(a==1){
	
	printf("a is greater");
	} else {
		printf("b is greater");
	}
}
int greater(int a,int b){

	
	if(a>b) {
		return 1;
		
}
}