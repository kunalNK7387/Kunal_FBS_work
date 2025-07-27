#include <stdio.h>
int Armstrong();
void main() {
	int a= Armstrong();
	if(a==1) {

		printf(" %d is an Armstrong number.\n",a);
	} else {
		printf(" %d is not an Armstrong number.\n",a);
	}

}
int Armstrong() {

	int num, originalNum, rem, sum = 0;

	printf("Enter a 3-digit number: ");
	scanf("%d", &num);

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
