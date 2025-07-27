#include<stdio.h>
int pallindrome(int);
void main() {
	int a;
	printf("Enter 3 digit number only:");
	scanf("%d",& a);

	if(a==1) {

		printf("The the is pallindrome.");
	} else {
		printf("The number is not pallindrome.");
	}
	int no=pallindrome(a);

}
int  pallindrome(int no) {


	int rev, r1,r2,r3,q1;
	r3= no % 10;
	q1= no / 10;
	r2= q1 % 10;
	r1= q1 / 10;

	rev = (r3*100) +(r2*10) + (r1);
	if(rev==no) {
		return 1;
	}


}