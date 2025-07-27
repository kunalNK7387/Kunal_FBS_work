int Pallaidrom();
void main(){
	int a= Pallaidrom();
	if(a==1)
		printf("Num Is Pallaidrom",a);
	else
		printf("Num Is Not Pallaidrom",a);
}
int Pallaidrom(){

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
	return 1;
	
}