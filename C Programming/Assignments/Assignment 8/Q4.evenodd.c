void main() {
	int arr[5];
	for(int i=0; i<5; i++) {
		printf("Enter the array [%d]:",i);
		scanf("%d",&arr[i]);
	}
	for(int i=0; i<5; i++) {
		if(arr[i]%2==0) {
			printf("even : %d \n",arr[i]);
		}else{
			printf("odd : %d \n",arr[i]);
		}
	}
	
}