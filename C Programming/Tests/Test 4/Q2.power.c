void main(){
	int base,pow;
	printf("Enter base:");
	scanf("%d",&base);
	printf("Enter pow:");
	scanf("%d",&pow);
	int num=1;
	for(int i=0;i<pow;i++){
		num=num*base;
	}
	
	printf("%d",num);
	
}