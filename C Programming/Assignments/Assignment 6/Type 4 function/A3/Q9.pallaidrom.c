int Pallaidrom(int );
void main(){
	int num;
	printf("Enter (Three Digit NO. Only) Num : ");
	scanf("%d",&num);
	int a= Pallaidrom(num);
	if(a==1)
		printf("Num Is Pallaidrom",a);
	else
		printf("Num Is Not Pallaidrom",a);
}
int Pallaidrom(int num){

	int rev=0,rem,original;
	
	original=num;
	
	while(num!=0){
		rem = num%10;
		rev=rev*10+rem;
		num=num/10;
		
	}	
	
	if (original==rev)
	return 1;
	
}