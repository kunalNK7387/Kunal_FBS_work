#include <stdio.h>
void Armstrong();
void main() {
	Armstrong();
}
void Armstrong(){

	int num, originalNum, rem, sum = 0;

	printf("Enter a 3-digit number: ");
	scanf("%d", &num);

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
