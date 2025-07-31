#include<stdio.h>
void pallindrome(int*,int);
void main() {
	int a[5];
	for(int i=0; i<5; i++) {

		printf("Enter 3 digit number only:",i);
		scanf("%d",& a[i]);
	}
	int size=sizeof(a)/sizeof(a[0]);
	pallindrome(a,size);

}
void pallindrome(int* a,int size) {

	for(int i=0; i<size; i++) {

		int rev, r1,r2,r3,q1;
		r3= a[i] % 10;
		q1= a[i] / 10;
		r2= q1 % 10;
		r1= q1 / 10;

		rev = (r3*100) +(r2*10) + (r1);
		if(rev==a[i]) {
			printf("The the is pallindrome.");
		} else {
			printf("The number is not pallindrome.");
		}
	}

}