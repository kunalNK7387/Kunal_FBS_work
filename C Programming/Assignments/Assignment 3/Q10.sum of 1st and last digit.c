void main(){
	int no ,last,first=0,rem;
	printf("Enter the number:");
	scanf("%d",&no);
	
	last=no%10;
	
	while(no>0){
		rem=no%10;
		no=no/10;
	}
	int sum=last+rem;
	printf("%d",sum);
	
}