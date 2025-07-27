#include <stdio.h>
void PerfectNumber(int*);
void main() {
	int num;
	printf("Enter The number: ");
	scanf("%d", &num);
	
	PerfectNumber(&num);
}
void PerfectNumber(int* num){

	int  sum = 0;

	

	for (int i = 1; i < *num; i++) {
		if (*num % i == 0) {
			sum += i;
		}
	}
	if (sum == *num)
		printf("%d is a Perfect number.\n", *num);
	else
		printf("%d is not a Perfect number.\n", *num);

}
