void Pallaidrom();
void main(){
	Pallaidrom();
}
void Pallaidrom(){

	int num,rev=0,rem,original;
	printf("Enter (Three Digit NO. Only) Num : ");
	scanf("%d",&num);
	original=num;
	
	while(num!=0){
		rem = num%10;
		rev=rev*10+rem;
		num=num/10;
		
	}	
	
	if (original==rev)
		printf("Num Is Pallaidrom",original);
	else
		printf("Num Is Not Pallaidrom",original);
	
}