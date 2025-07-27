#include<stdio.h>
int strongNumber(int);
void main() {
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	int a= strongNumber(n);
	if(a==1) {

		printf("  is a strong number" );
	} else {

		printf("  is not a strong number");
	}
}
int strongNumber(int n) {

	int temp, rem, sum = 0, i, fact;
	
	temp = n;

	while (n) {
		i = 1;
		fact = 1;
		rem = n % 10;
		while (i <= rem) {
			fact = fact * i;
			i++;
		}
		sum = sum + fact;
		n = n / 10;
	}

	if (sum == temp){
		return 1;
	}


	}