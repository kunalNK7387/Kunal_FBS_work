#include<stdio.h>
int startEndSum();
void main() {
	int a=startEndSum();
	printf("Result %d", a);
}
int startEndSum(){
	int start;
	int end,sum=0;
	printf("Enter the start number:");
	scanf("%d", & start);
	printf("Enter the end  number:");
	scanf("%d", & end);

	for(int i=start; i<=end; i++) {
		sum=i+sum;
	}

	return sum;
}