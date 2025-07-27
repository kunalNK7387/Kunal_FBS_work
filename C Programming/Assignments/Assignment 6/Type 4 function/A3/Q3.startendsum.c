#include<stdio.h>
int startEndSum(int,int);
void main() {
	int start;
	int end;
	printf("Enter the start number:");
	scanf("%d", & start);
	printf("Enter the end  number:");
	scanf("%d", & end);

	int no=startEndSum(start,end);
	printf("Result %d", no);
}
int startEndSum(int start,int end){
	int sum=0;
	for(int i=start; i<=end; i++) {
		sum=i+sum;
	}

	return sum;
}