#include<stdio.h>
int leapYear();
void main() {
	int a = leapYear();
	if(a==1) {
		printf("This year is leap. ");
	} else {
		printf("This is not a leap year.");
	}
}
int leapYear() {

	int year;
	printf("Enter the year:");
	scanf("%d",&year);
	if(year%4==0 &&year%100!=0 ||year%400==0) {
		return 1;

	}
}