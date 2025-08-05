void main() {
	//int arr[5];
	int* arr=(int*) malloc(sizeof(int)*5);
	for(int i=0; i<5; i++) {
		printf("Enter the array [%d]:",i);
		scanf("%d",&arr[i]);
	}

	for(int i=0; i<5; i++) {
		int isPrime=1 ;
		if(arr[i]<=1) {
			isPrime=0;

		} else {
			for(int j=2; j<arr[i]; j++) {
				if(arr[i]%j==0) {
					isPrime=0;
					break;
				}
			}
		}
		if(isPrime) {
			printf("%d is prime number \n ",arr[i]);
		} else {
			printf("%d is  not prime number \n ",arr[i]);
		}
	}
	free(arr);
}