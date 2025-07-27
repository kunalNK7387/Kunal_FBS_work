void Pallaidrom(int* );
void main(){
	int num;
	printf("Enter (Three Digit NO. Only) Num : ");
	scanf("%d",&num);
	
	Pallaidrom(&num);
}
void Pallaidrom(int* num){

	int rev=0,rem,original;
	
	original=*num;
	
	while(*num!=0){
		rem = *num%10;
		rev=rev*10+rem;
		*num=*num/10;
		
	}	
	
	if (original==rev)
		printf("Num Is Pallaidrom",original);
	else
		printf("Num Is Not Pallaidrom",original);
	
}