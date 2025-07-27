#include<stdio.h>
int discount();
void main(){
	int a=discount();
	printf("Your prince is %d ",a);
}
int discount(){

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
			
		}else{
			discount=price*0.10;
		
		}
	}else if(ch=='n'){
		if(price>=600){
			discount=price*0.15;
			
		}else{
			printf("You are not eligible for discount");
		}
	}else{
		printf("Enter the proper Input");
	}
	return discount;
	
}
