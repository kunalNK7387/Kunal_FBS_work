#include <stdio.h>
void main() {
	int n;
	printf("Enter n : ");
	scanf("%d", &n);

	int arr[n];
	int brr[n];

	for (int j = 0; j < n; j++) {
		printf(" [%d]: ", j);
		scanf("%d", &arr[j]);
	}

	for (int i = 0; i < n; i++) {
		brr[i] = arr[n - 1 - i];
	}

	printf("reversed array:\n");
	for (int i = 0; i < n; i++) {
		printf("%d ", brr[i]);
	}

}
