void main() {
	int no;
	printf("Enter the number");
	scanf("%d",&no);
	for(int i=no; i>=1; i--) {
		for(int j=1; j<=no-i; j++) {

			printf(" ");
		}
		for(int k=1;k<=(2*i-1);k++){
			printf("*");
		}
		
		printf("\n");
	}
}
