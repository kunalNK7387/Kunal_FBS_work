#include<stdio.h>
void strongNumber(int);
void main() {
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	
	strongNumber(n);
}
void strongNumber(int n){

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

	if (sum == temp)
		printf("%d is a strong number", temp);
	else
		printf("%d is not a strong number", temp);

}