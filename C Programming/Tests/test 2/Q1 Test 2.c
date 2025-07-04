void main(){
	int unit;
	printf("Enter the units :");
	scanf("%d",& unit);
	int bill;
	
	if(unit<=50){
		bill=unit*30;
		printf("The amount of bill %d",bill);
	
	}else if(unit>=51 && unit<=150){
		bill=unit*40;
		printf("The amount of bill %d",bill);
	}else{
		bill=unit*50;
		printf("The amount of bill %d",bill);
		
	
	}
}