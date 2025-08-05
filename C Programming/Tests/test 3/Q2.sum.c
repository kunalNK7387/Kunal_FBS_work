void main() {
	int start,end;
	printf("Enter the start no.:");
	scanf("%d",&start);
	printf("Enter the end no.:");
	scanf("%d",&end);
	int sum=0;
	for(int i=start;i<=end;i+=2){
		sum=sum+i;
	}
	printf("sum %d",sum);

}