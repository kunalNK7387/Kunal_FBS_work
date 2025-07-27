int  voting();
void main() {
	int a = voting();
	if(a==1){
	
		printf("Person is eligible for voting");
	} else {
		printf("Person is not eligible for voting");
	}
}
int  voting(){

	int age;
	printf("Enter you age:");
	scanf("%d",&age);
	if(age>=18) {
	return 1;
}
}