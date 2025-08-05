void main() {
	//int arr[5];
	int* arr=(int*) malloc(sizeof(int)*5);
	free(arr);
	for(int i=0; i<5; i++) {
		printf("Enter the array [%d]:",i);
		scanf("%d",&arr[i]);
	}
	int max=arr[0];
	for(int i=0; i<5; i++) {
		if (arr[i]>max) {
			max=arr[i];
		}
		}

		int min=arr[0];
		for(int i=0; i<5; i++) {
			if (arr[i]<min) {
				min=arr[i];
			}

		}
		printf("max %d \n",max);
		printf("min %d \n",min);
} 
