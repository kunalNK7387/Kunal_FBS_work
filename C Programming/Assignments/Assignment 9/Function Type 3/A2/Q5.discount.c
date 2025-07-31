#include<stdio.h>
void discount(int*,char*);
void main() {
	char ch;
	int price[2];
	for(int i=0; i<2; i++) {

		printf("Enter the price:",i);
		scanf("%d",& price[i]);

	}
	fflush(stdin);
	printf("Enter you are student or not ('y'and 'n'):");
	scanf("%c",& ch);
	discount(price,&ch);
}
void discount(int* price,char* ch) {
	for(int i=0; i<2; i++) {
		int discount;
		if(*ch=='y') {
			if(price[i]>=500) {
				discount=price[i]*0.20;
				printf("Your prince is %d \n",discount);
			} else {
				discount=price[i]*0.10;
				printf("Your prince is %d \n",discount);
			}
		} else if(*ch=='n') {
			if(price[i]>=600) {
				discount=price[i]*0.15;
				printf("Your prince is %d \n",discount);
			} else {
				printf("You are not eligible for discount \n");
			}
		} else {
			printf("Enter the proper Input");
		}

	}
}
