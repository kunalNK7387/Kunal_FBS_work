#include <stdio.h>
int PerfectNumber(int);
void main() {
	int num;
	printf("Enter The number: ");
	scanf("%d", &num);
	int a= PerfectNumber(num);
	if(a==1) {

		printf(" is a Perfect number.\n");
	} else {

		printf(" is not a Perfect number.\n");
	}
}
int PerfectNumber(int num) {

	int sum = 0;

	

	for (int i = 1; i < num; i++) {
		if (num % i == 0) {
			sum += i;
		}
	}
	if (sum == num){
		return 1;
	}


	}
