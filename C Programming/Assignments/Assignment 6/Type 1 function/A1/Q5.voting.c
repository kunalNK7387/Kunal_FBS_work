void voting();
void main() {
	voting();
}
void voting(){

	int age;
	printf("Enter you age:");
	scanf("%d",&age);
	if(age>=18) {
		printf("Person is eligible for voting");
	} else {
		printf("Person is not eligible for voting");
	}
}