void voting(int);
void main() {
	int age;
	printf("Enter you age:");
	scanf("%d",&age);
	voting(age);
}
void voting(int a){

	
	if(a>=18) {
		printf("Person is eligible for voting");
	} else {
		printf("Person is not eligible for voting");
	}
}