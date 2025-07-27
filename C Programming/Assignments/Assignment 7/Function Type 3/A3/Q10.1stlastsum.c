void sumFirstLast(int* );
void main() {
	int no;
	printf("Enter the number:");
	scanf("%d",&no);

	sumFirstLast(&no);
}
void sumFirstLast(int* no) {

	int last,first=0,rem;


	last=*no%10;

//	while(no>0)
	for(int i=*no; i>0;) {
		rem=i%10;
		i=i/10;
	}
	int sum=last+rem;
	printf("%d",sum);

}