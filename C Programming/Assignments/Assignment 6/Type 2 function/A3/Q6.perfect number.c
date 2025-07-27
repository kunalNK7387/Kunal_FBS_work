#include <stdio.h>
int PerfectNumber();
void main() {
	int a= PerfectNumber();
	if(a==1) {

		printf("%d is a Perfect number.\n", a);
	} else {

		printf("%d is not a Perfect number.\n", a);
	}
}
int PerfectNumber() {

	int num, sum = 0;

	printf("Enter The number: ");
	scanf("%d", &num);

	for (int i = 1; i < num; i++) {
		if (num % i == 0) {
			sum += i;
		}
	}
	if (sum == num){
		return 1;
	}


	}
