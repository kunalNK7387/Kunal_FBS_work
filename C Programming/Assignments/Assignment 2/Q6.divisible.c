#include<stdio.h>
void main(){
	int no;
	printf("Enter the number:");
	scanf("%d",&no);
	
	if(no % 3==0 && no % 5==0){
		printf("The number is divisible by both (3 and 5) %d");
		
	}else if(no%3==0){
		printf("The number is divisible by 3");
	}else if(no%5==0){
		printf("The number is divisible by 5");
	}else{
		printf("The number is not divisible by both");
	}
}