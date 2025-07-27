#include<stdio.h>
void discount(int ,char);
void main(){
	char ch;
	int price;
	
	printf("Enter the price:");
	scanf("%d",& price);
	fflush(stdin);
	printf("Enter you are student or not ('y'and 'n'):");
	scanf("%c",& ch);
	
	discount(price,ch);
}
void discount(int price,char ch){
	int discount;
	
	
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
