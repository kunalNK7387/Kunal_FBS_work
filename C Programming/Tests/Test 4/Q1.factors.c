void main(){
	int start,end;
	printf("Enter start no.");
	scanf("%d",&start);
	printf("Enter end no.");
	scanf("%d",&end);
	
	for(int i=start;i<=end;i++){
		printf("for %d:",i);
		for(int j=1;j<=i;j++){
			if(i%j==0){
				printf("%d ,",j);
			}
		}
		printf("\n");
	}
}