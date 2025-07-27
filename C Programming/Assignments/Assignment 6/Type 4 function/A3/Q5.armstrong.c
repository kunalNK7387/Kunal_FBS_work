#include <stdio.h>
int Armstrong(int);
void main() {
	int num;
	printf("Enter a 3-digit number: ");
	scanf("%d", &num);
	int a= Armstrong(num);
	if(a==1) {

		printf("  is an Armstrong number.\n");
	} else {
		printf("  is not an Armstrong number.\n");
	}

}
int Armstrong(int num) {

	int originalNum, rem, sum = 0;



	originalNum = num;

	while (originalNum != 0) {
		rem = originalNum % 10;
		sum = sum + rem * rem * rem;  // rem³
		originalNum /= 10;
	}

	if (sum == num) {
		return 1;
	}


}
