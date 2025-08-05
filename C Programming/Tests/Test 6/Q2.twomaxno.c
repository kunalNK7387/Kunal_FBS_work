#include <stdio.h>
void
 main() {
	int arr[5];
	for(int i = 0; i < 5; i++) {
		printf("Enter the array[%d]: ", i);
		scanf("%d", &arr[i]);
	}
	int max1, max2;
	if (arr[0] > arr[1]) {
		max1 = arr[0];
		max2 = arr[1];
	} else {
		max1 = arr[1];
		max2 = arr[0];
	}
	for (int i = 2; i < 5; i++) {
		if (arr[i] > max1) {
			max2 = max1;
			max1 = arr[i];
		} else if (arr[i] > max2) {
			max2 = arr[i];
		}
	}
	printf("First maximum number: %d\n", max1);
	printf("Second maximum number: %d\n", max2);
	return 0;
}
