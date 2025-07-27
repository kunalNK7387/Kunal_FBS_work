#include<stdio.h>
void leapYear();
void main(){
	leapYear();
}
void leapYear(){

	int year;
	printf("Enter the year:");
	scanf("%d",&year);
	if(year%4==0 &&year%100!=0 ||year%400==0){
		printf("This year is leap. ");
	}else{
		printf("This is not a leap year.");
	}
}