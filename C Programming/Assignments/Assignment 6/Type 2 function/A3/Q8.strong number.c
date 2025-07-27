#include<stdio.h>
int strongNumber();
void main() {
	int a= strongNumber();
	if(a==1) {

		printf("  is a strong number" );
	} else {

		printf("  is not a strong number");
	}
}
int strongNumber() {

	int n, temp, rem, sum = 0, i, fact;
	printf("Enter the number:");
	scanf("%d",&n);
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