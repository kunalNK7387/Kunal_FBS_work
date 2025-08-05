#include <stdio.h>
void main() {
	//int arr[5];
	int* arr=(int*) malloc(sizeof(int)*5);
	for(int i = 0; i < 5; i++) {
		printf("Enter the array [%d]: ", i);
		scanf("%d", &arr[i]);
	}

	printf("||Second Array|| \n");
//	int brr[5];
	int* brr=(int*) malloc(sizeof(int)*5);
	for(int i = 0; i < 5; i++) {
		printf("Enter the array [%d]: ", i);
		scanf("%d", &brr[i]);  
	}

	printf("\n");

	int size1 = sizeof(arr) / sizeof(arr[0]);
	int size2 = sizeof(brr) / sizeof(brr[0]);
	int size = size1 + size2;

	int merge[size];

	for(int i = 0; i < size1; i++) {
		merge[i] = arr[i];
	}
	for(int i = 0; i < size2; i++) {
		merge[size1 + i] = brr[i];
	}

	for(int i = 0; i < size; i++) {
		printf("Arr[%d]: %d\n", i, merge[i]);
	}
	free(arr);
	free(brr);
}
