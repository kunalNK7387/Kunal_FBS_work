#include<stdio.h>
void pallindrome(int*);
void main() {
	int a;
	printf("Enter 3 digit number only:");
	scanf("%d",& a);
	pallindrome(&a);

}
void pallindrome(int* a) {



	int rev, r1,r2,r3,q1;
	r3= *a % 10;
	q1= *a / 10;
	r2= q1 % 10;
	r1= q1 / 10;

	rev = (r3*100) +(r2*10) + (r1);
	if(rev==*a) {
		printf("The the is pallindrome.");
	} else {
		printf("The number is not pallindrome.");
	}


}