#include<stdio.h>
void leapYear(int*,int size);
void main() {
	int year[4];
	for (int i=0; i<4; i++) {
		printf("Enter the year:",i);
		scanf("%d",&year[i]);
	}
	int size=sizeof(year)/sizeof(year[0]);
	leapYear(year,size);
}
void leapYear(int* a,int size) {

	for (int i=0; i<size; i++) {

		if(a[i] %4==0 && a[i] %100!=0 || a[i] %400==0) {
			printf("This year is leap.\n ");
		} else {
			printf("This is not a leap year.\n");
		}
	}
}