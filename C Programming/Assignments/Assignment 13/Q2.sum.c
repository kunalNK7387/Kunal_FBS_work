void main() {
	//int arr[5];
	int* arr=(int*) malloc(sizeof(int)*5);
	
	for(int i=0; i<5; i++) {
		printf("Enter the array [%d]:",i);
		scanf("%d",&arr[i]);
	}
	int sum=0;
	for(int i=0;i<5;i++){
		sum=sum+arr[i];
	}
	printf("%d",sum);
	free(arr);
}