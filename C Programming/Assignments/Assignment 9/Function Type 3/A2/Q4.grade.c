#include<stdio.h>
void grade(int*);
void main() {
	int a[2];
	for(int i=0; i<2; i++) {

		printf("Enter marks: ",i);
		scanf("%d",& a[i]);
	}
	
	grade(a);
}
void grade(int* a) {
	for(int i=0; i<2; i++) {
		if(a[i]>75) {
			printf("Distinction.\n");

		} else if(a[i]>65) {
			printf("First Class.\n");

		} else if(a[i]>55) {
			printf("Second Class.\n");
		} else if(a[i]>=40) {
			printf("Pass class.\n");
		} else {
			printf("Fail.\n");
		}
	}
}