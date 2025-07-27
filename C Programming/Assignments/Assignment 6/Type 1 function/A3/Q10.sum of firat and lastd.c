void sumFirstLast();
void main(){
	sumFirstLast();
}
void sumFirstLast(){

	int no ,last,first=0,rem;
	printf("Enter the number:");
	scanf("%d",&no);
	
	last=no%10;
	
//	while(no>0)
	for(int i=no;i>0;){
		rem=i%10;
		i=i/10;
	}
	int sum=last+rem;
	printf("%d",sum);
	
}