void main(){
	int arr[5];
	for(int i=0; i<5; i++) {
		printf("Enter the array [%d]:",i);
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<5;i++){
		printf("array[%d]:%d\n ",i,arr[i]);
	
	}
	int num;
	printf("Enter the num ");
	scanf("%d",&num);
	
	for(int i=0;i<5;i++){
		if(num==arr[i]){
			printf("the number is found %d",num);
		}
	}
}