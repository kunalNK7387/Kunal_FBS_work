void main() {
//	int arr[5];
	int* arr=(int*) malloc(sizeof(int)*5);
	for(int i=0; i<5; i++) {
		printf("Enter the array [%d]:",i);
		scanf("%d",&arr[i]);
	}
	for(int i=0; i<5; i+=2) {
		printf("Alternate no. [%d] \n",arr[i]);
	}
	free(arr);
}