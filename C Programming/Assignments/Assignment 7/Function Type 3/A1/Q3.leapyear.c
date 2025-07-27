#include<stdio.h>
void leapYear(int*);
void main() {
	int year;
	printf("Enter the year:");
	scanf("%d",&year );
	leapYear(&year);
}
void leapYear(int* a) {



	if(*a%4==0 && *a%100!=0 || *a%400==0) {
		printf("This year is leap. ");
	} else {
		printf("This is not a leap year.");
	}
}