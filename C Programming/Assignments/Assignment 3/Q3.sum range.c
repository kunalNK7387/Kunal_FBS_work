#include<stdio.h>
void main() {
	int start;
	int end,sum=0;
	printf("Enter the start number:");
	scanf("%d", & start);
	printf("Enter the end  number:");
	scanf("%d", & end);

	for(int i=start; i<=end; i++) {
		sum=i+sum;
	}
	printf("Result %d", sum);
}