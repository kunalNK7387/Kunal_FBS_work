#include<stdio.h>
void evenOdd(int*,int );
void main() {
	int a[]= {1,2,3,4,5,6,7,8};
	int size=sizeof(a)/sizeof(a[0]);
	evenOdd(a,size);


}
void evenOdd(int* a,int size) {
	for(int i=0; i<size; i++) {
		if(a[i] % 2==0) {
			printf("even \n");

		} else {
			printf("odd \n");
		}
	}
}