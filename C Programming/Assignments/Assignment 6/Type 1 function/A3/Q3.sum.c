#include<stdio.h>
void startEndSum();
void main() {
	startEndSum();
}
void startEndSum(){
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