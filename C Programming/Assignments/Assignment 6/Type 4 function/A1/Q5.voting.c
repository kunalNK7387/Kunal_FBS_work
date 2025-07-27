int  voting(int);
void main() {
	int age;
	printf("Enter you age:");
	scanf("%d",&age);
	int a = voting(age);
	if(a==1){
	
		printf("Person is eligible for voting");
	} else {
		printf("Person is not eligible for voting");
	}
}
int  voting(int age){

	
	if(age>=18) {
	return 1;
}
}