#include<stdio.h>
void main(){
	char ch;
	int price,discount;
	
	printf("Enter the price:");
	scanf("%d",& price);
	fflush(stdin);
	printf("Enter you are student or not ('y'and 'n'):");
	scanf("%c",& ch);
	
	if(ch=='y'){
		if(price>=500){
			discount=price*0.20;
			printf("Your prince is %d ",discount);
		}else{
			discount=price*0.10;
			printf("Your prince is %d ",discount);
		}
	}else if(ch=='n'){
		if(price>=600){
			discount=price*0.15;
			printf("Your prince is %d ",discount);
		}else{
			printf("You are not eligible for discount");
		}
	}else{
		printf("Enter the proper Input");
	}
	
}
