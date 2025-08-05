int totalprice(int ,int ); 
void main(){
	int costprice,discount;
	
	printf("Enter the cost price of book : ");
	scanf("%d",& costprice);
	
	printf("Enter the discount in percent(10,15,20) :");
	scanf("%d",& discount );
	
	totalprice(costprice,discount);
}
int totalprice(int c,int d){
	
	int sellingprice;
	printf("\nEnter the cost price of book  :%d ",c);
	printf("\nEnter the discount in percent(10,15,20) :%d ",d);
	if(d==10){
		sellingprice=c-(c*0.10);
		printf("\nTotal selling price after 10 discount : %d ",sellingprice);
		
	}else if(d==15){
		sellingprice=c-(c*0.15);
		printf("\nTotal selling price after 15 discount  :%d",sellingprice);
	}else if(d==20){
		sellingprice=c-(c*0.20);
		printf("\nTotal selling price after 20 discount  :%d",sellingprice);
	}else{
			printf("Enter proper details");
	}
	
}