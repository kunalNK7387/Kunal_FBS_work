#include <stdio.h>
void Armstrong(int);
void main() {
	int num;
	printf("Enter a 3-digit number: ");
	scanf("%d", &num);
	
	Armstrong(num);
}
void Armstrong(int num){

	int originalNum, rem, sum = 0;

	

	originalNum = num;

	while (originalNum != 0) {
		rem = originalNum % 10;
		sum = sum + rem * rem * rem;  // rem³
		originalNum /= 10;
	}

	if (sum == num)
		printf("%d is an Armstrong number.\n", num);
	else
		printf("%d is not an Armstrong number.\n", num);

}
