int odd(int,int);
int even(int,int);
int main() {
	int start;
	int end ;
	printf("Enter the start number:");
	scanf("%d", & start);
	printf("Enter the end  number:");
	scanf("%d", & end);

	odd(start,end);
	even(start,end);
}
int odd(int start,int end) {
	for(int i=start; i<=end; i++) {
		if (i%2!=0) {
			printf("%d",i);
		}
	}
	printf("\n");
}
int even(int start,int end) {
	for(int i=start; i<=end; i++) {
		if (i%2==0) {
			printf("%d",i);
		}

	}
	printf("\n");
}
