#include<stdio.h>
int leapYear();
void main() {
	
	int year;
	printf("Enter the year:");
	scanf("%d",&year);
	int a = leapYear(year2);
	if(a==1) {
		printf("This year is leap. ");
	} else {
		printf("This is not a leap year.");
	}
}
int leapYear(int year) {

	if(year%4==0 &&year%100!=0 ||year%400==0) {
		return 1;

	}
}