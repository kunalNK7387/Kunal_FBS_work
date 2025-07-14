void main(){
	int no;
	printf("Enter the number");
	scanf("%d",&no);
	for(int i=1;i<=no;i++){
		for(int j=1;j<=no;j++){
			if(i==1||i==no||j==1||j==no){
				printf("*");
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
}