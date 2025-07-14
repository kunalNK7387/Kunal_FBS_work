void main() {
	int no;
	printf("Enter the number");
	scanf("%d",&no);
	for(int i=no; i>=1; i--) {
		for(int j=1; j<=i; j++) {

			printf("*");

		}
		printf("\n");
	}
}
