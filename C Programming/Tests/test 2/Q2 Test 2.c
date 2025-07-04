void main(){
	int a;
	printf("Enter the number:");
	scanf("%d",& a);
	
	if(a<0){
		printf("The number is negative.");
	}else if(a>0){
		printf("The number is positive. ");
	}else{
		printf("The number is nutral 0.");
	}
}