#include<stdio.h>
void greater(int*,int*);
void main() {
	int a[2], b[2];
	for(int i=0; i<2; i++) {

		printf("enter the number: ",i);
		scanf("%d",& a[i]);

		printf("enter the number: ",i);
		scanf("%d",& b[i]);
	}

	greater(a,b);
}
void greater(int* a, int* b) {
	for(int i=0; i<2; i++) {

		if(a[i]>b[i]) {
			printf("a is greater/n");
		} else {
			printf("b is greater/n");
		}
	}
}