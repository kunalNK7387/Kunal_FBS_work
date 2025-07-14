void main() {
	int no,res;
	printf("Enter the number");
	scanf("%d",&no);
	for(int i=1; i<=no; i++) {
		for(int j=1; j<=i; j++) {

			printf("%d",res++);

		}
		printf("\n");
	}
}
